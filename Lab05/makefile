main: main.o MyRandom.o insertionL5.o shell.o utility.o
	g++ MyRandom.o main.o insertionL5.o shell.o utility.o -o main

main.o: main.c++ MyRandom.h utility.h insertionL5.h shell.h
	g++ -c main.c++

MyRandom.o: MyRandom.h MyRandom.c++
	g++ -c MyRandom.c++

utility.o: utility.h utility.c++
	g++ -c utility.c++

insertionL5.o: insertionL5.h insertionL5.c++
	g++ -c insertionL5.c++

shell.o: shell.h shell.c++
	g++ -c shell.c++
