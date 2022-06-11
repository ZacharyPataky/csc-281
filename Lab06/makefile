main: main.o MyRandom.o fixHeap.o heapSort.o utility.o
	g++ MyRandom.o main.o fixHeap.o heapSort.o utility.o -o main

main.o: main.c++ MyRandom.h utility.h fixHeap.o heapSort.o
	g++ -c main.c++

MyRandom.o: MyRandom.h MyRandom.c++
	g++ -c MyRandom.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

fixHeap.o: fixHeap.h fixHeap.c++
	g++ -c fixHeap.c++

heapSort.o: heapSort.h heapSort.c++
	g++ -c heapSort.c++
