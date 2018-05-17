usestock00:usestock00.o stock00.o
	g++ -o usestock00 usestock00.o stock00.o

usestock00.o:usestock00.cpp stock00.h
	g++ -c usestock00.cpp

stock00.o:stock00.cpp stock00.h
	g++ -c stock00.cpp

clean:
	rm stock00.o usestock00.o
