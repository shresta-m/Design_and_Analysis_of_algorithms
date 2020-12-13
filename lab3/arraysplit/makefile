output: main.o arraysplit.o
	g++ main.o arraysplit.o -o output
main.o: main.cpp
	g++ -c main.cpp
lognsq.o: arraysplit.cpp arraysplit.h
	g++ -c arraysplit.cpp