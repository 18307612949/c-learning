usetime:usetime0.o mytime0.o
	g++ -o usetime usetime0.o mytime0.o

usetime0.o:usetime0.cpp mytime0.h
	g++ -c usetime0.cpp

mytime0.o:mytime0.cpp mytime0.h
	g++ -c mytime0.cpp
	
clean:
	rm mytime0.o usetime0.o
