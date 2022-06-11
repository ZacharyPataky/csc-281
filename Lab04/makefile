main: main.o MyRandom.o insertion.o utility.o
	g++ MyRandom.o main.o insertion.o utility.o -o main

main.o: main.c++ MyRandom.h utility.h insertion.h
	g++ -c main.c++

MyRandom.o: MyRandom.h MyRandom.c++
	g++ -c MyRandom.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

insertion.o: insertion.h insertion.c++
	g++ -c insertion.c++
