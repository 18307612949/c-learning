/*
read from the default PCM device and writes to standard output for 5 seconds of data
*/

#define ALSA_PCM_NEW_HW_PARAMS_API

#include <alsa/asoundlib.h>

int main()
{
   long loops;
   int rc;
   int size;
   snd_pcm_t * handle;
   snd_pcm_hw_params_t * params;
   unsigned int val;
   int dir;
   snd_pcm_uframes_t frames;
   char * buffer;
   FILE * out_fd;
   out_fd = fopen("out_pcm.raw","wb+");
   /* open PCM device for recording (capture). */
   rc = snd_pcm_open(&handle, "default",SND_PCM_STREAM_CAPTURE,0);
   if( rc < 0 )
   {
      fprintf(stderr,
              "unable to open pcm device: %s\n",
              snd_strerror(rc));
      exit(1);
   }
   /* allocate a hardware parameters object */
   snd_pcm_hw_params_alloca(&params);
   /* fill it with default values. */
   snd_pcm_hw_params_any(handle,params);
   /* set the desired hardware parameters */
   /* interleaved mode */
   snd_pcm_hw_params_set_access(handle,params,
                                SND_PCM_ACCESS_RW_INTERLEAVED);
   /* signed 16-bit little-endian format */
   snd_pcm_hw_params_set_format(handle,params,
                                SND_PCM_FORMAT_S16_LE);
   /* two channels(stereo) */
   snd_pcm_hw_params_set_channels(handle,params,2);
   /* sampling rate */
   val = 44100;
   snd_pcm_hw_params_set_rate_near(handle,params,&val,&dir);
   /* set period size */
   frames = 32;
   snd_pcm_hw_params_set_period_size_near(handle,params,&frames,&dir);
   /* write parameters to the driver */
   rc = snd_pcm_hw_params(handle,params);
   if ( rc < 0 )
   {
       fprintf(stderr,
               "unable to set hw parameters: %s\n",
               snd_strerror(rc));
       exit(1);
   }
   /* use a buffer large enough to hold one period */
   snd_pcm_hw_params_get_period_size(params,&frames,&dir);
   size = frames * 4; /* 2 bytes/sample, 2channels */
   buffer = ( char * ) malloc(size);
   /* loop for 5 seconds */
   snd_pcm_hw_params_get_period_time(params, &val, &dir);
   loops = 5000000 / val;
   while( loops > 0 )
   {
       loops--;
       rc = snd_pcm_readi(handle,buffer,frames);
       if ( rc == -EPIPE )
       {
          /* EPIPE means overrun */
          fprintf(stderr,"overrun occured\n");
          snd_pcm_prepare(handle);
       }
       else if ( rc < 0 )
       {
          fprintf(stderr,"error from read: %s\n",
                  snd_strerror(rc));
       }
       else if ( rc != (int)frames)
       {
          fprintf(stderr,"short read, read %d frames\n",rc);
       }
       //rc = fwrite(buffer, 1, size, out_fd);
       rc = write(1, buffer, size);
       if ( rc != size )
       {
          fprintf(stderr,"short write: wrote %d bytes\n",rc);
       }
   }
   snd_pcm_drain(handle);
   snd_pcm_close(handle);
   free(buffer);
   fclose(out_fd);
}
