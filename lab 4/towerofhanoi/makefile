output: main.o tower.o
	g++ main.o tower.o -o output
main.o: main.cpp
	g++ -c main.cpp
tower.o: tower.cpp tower.h
	g++ -c tower.cpp