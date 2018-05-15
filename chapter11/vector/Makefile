randwalk:vector.o randwalk.o
	g++ -o randwalk vector.o randwalk.o

randwalk.o:randwalk.cpp vector.h
	g++ -c randwalk.cpp

vector.o:vector.cpp vector.h
	g++ -c vector.cpp

clean:
	rm vector.o randwalk.o
