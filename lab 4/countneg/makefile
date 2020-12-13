output: main.o countneg.o
	g++ main.o countneg.o -o output
main.o: main.cpp
	g++ -c main.cpp
countneg.o: countneg.cpp countneg.h
	g++ -c countneg.cpp