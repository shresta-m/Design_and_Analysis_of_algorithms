output: main.o primality.o
	g++ main.o primality.o -o output
main.o: main.cpp
	g++ -c main.cpp
lognsq.o: primality.cpp primality.h
	g++ -c primality.cpp