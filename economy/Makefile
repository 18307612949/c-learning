test:test.o country.o
	g++ -g -o test test.o country.o

test.o:test.cpp country.h
	g++ -c test.cpp

country.o:country.cpp country.h
	g++ -c country.cpp

clean:
	rm country.o test.o
