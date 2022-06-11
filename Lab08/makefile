main: main.o MyRandom.o utility.o altPivotList.o altQuickSort.o fixHeap.o heapSort.o insertion.o insertionL5.o pivotList.o quickSort.o shell.o
	g++ main.o MyRandom.o utility.o altPivotList.o altQuickSort.o fixHeap.o heapSort.o insertion.o insertionL5.o pivotList.o quickSort.o shell.o -o main

main.o: main.c++ MyRandom.c++ utility.c++ altPivotList.c++ altQuickSort.c++ fixHeap.c++ heapSort.c++ insertion.c++ insertionL5.c++ pivotList.c++ quickSort.c++ shell.c++
	g++ -c main.c++

MyRandom.o: MyRandom.h MyRandom.c++
	g++ -c MyRandom.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

altPivotList.o: altPivotList.h altPivotList.c++
	g++ -c altPivotList.c++

altQuickSort.o: altQuickSort.h altQuickSort.c++
	g++ -c altQuickSort.c++

fixHeap.o: fixHeap.h fixHeap.c++
	g++ -c fixHeap.c++

heapSort.o: heapSort.h fixHeap.c++
	g++ -c heapSort.c++

insertion.o: insertion.h insertion.c++
	g++ -c insertion.c++

insertionL5.o: insertionL5.h insertionL5.c++
	g++ -c insertionL5.c++

pivotList.o: pivotList.h pivotList.c++
	g++ -c pivotList.c++

quickSort.o: quickSort.h quickSort.c++
	g++ -c quickSort.c++

shell.o: shell.h shell.c++
	g++ -c shell.c++