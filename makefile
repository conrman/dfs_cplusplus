main:	DLL.o main.cpp
	g++ DLL.o main.cpp -o main

DLL.o:	DLL.h DLL.cpp

clean:
	rm -f main *.o