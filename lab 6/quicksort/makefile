output: main.o quick.o
	g++ main.o quick.o -o output
main.o: main.cpp
	g++ -c main.cpp
lognsq.o: quick.cpp quick.h
	g++ -c quick.cpp