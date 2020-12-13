output: main.o pattern.o
	g++ main.o pattern.o -o output
main.o: main.cpp
	g++ -c main.cpp 
pattern.o: pattern.cpp pattern.h
	g++ -c pattern.cpp
