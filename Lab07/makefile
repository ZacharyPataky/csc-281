main: main.o MyRandom.o quickSort.o altQuickSort.o pivotList.o altPivotList.o utility.o
	g++ MyRandom.o main.o quickSort.o altQuickSort.o pivotList.o altPivotList.o utility.o -o main

main.o: main.c++ MyRandom.h utility.h quickSort.o altQuickSort.o pivotList.o altPivotList.o
	g++ -c main.c++

MyRandom.o: MyRandom.h MyRandom.c++
	g++ -c MyRandom.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

quickSort.o: quickSort.h quickSort.c++
	g++ -c quickSort.c++

altQuickSort.o: altQuickSort.h altQuickSort.c++
	g++ -c altQuickSort.c++

pivotList.o: pivotList.h pivotList.c++
	g++ -c pivotList.c++

altPivotList.o: altPivotList.h altPivotList.c++
	g++ -c altPivotList.c++
