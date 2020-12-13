output: main.o minmax.o
	g++ main.o minmax.o -o output
main.o: main.cpp
	g++ -c main.cpp
lognsq.o: minmax.cpp minmax.h
	g++ -c minmax.cpp