main: main.o utility.o kruskals.o partition.o pivotListL9.o quickSortL9.o
	g++ main.o utility.o kruskals.o partition.o pivotListL9.o quickSortL9.o -o main

main.o: main.c++ utility.c++ kruskals.c++ partition.c++ pivotListL9.c++ quickSortL9.c++
	g++ -c main.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

kruskals.o: kruskals.h kruskals.c++
	g++ -c kruskals.c++

partition.o: partition.h partition.c++
	g++ -c partition.c++

pivotListL9.o: pivotListL9.h pivotListL9.c++
	g++ -c pivotListL9.c++

quickSortL9.o: quickSortL9.h quickSortL9.c++
	g++ -c quickSortL9.c++
