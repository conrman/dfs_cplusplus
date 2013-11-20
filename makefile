main:	Graph.o main.cpp
	g++ Graph.o main.cpp -o main

Graph.o:	Graph.h Graph.cpp

clean:
	rm -f main *.o