/*==========================+
|Zachary Pataky             |
|main.c++                   |
|Created: 10 February 2020  |
|Last Modified: 11 June 2022|
+==========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include <cmath>
#include <iostream>

#include "MyRandom.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

/*===================================================================+
|This is the main program for Lab #3.                                |
|This will test class [MyRandom] method [RanNum] and another "random"|
|    algorithm.                                                      |
+===================================================================*/
int main() {

    cout << endl;

    // [MyRandom] instance used to fill arrays with "random" values
    MyRandom ran = MyRandom();

/////////////////////////////////////////////////////////////////////////////////

    /*==================================================================+
    |This code block tests [MyRandom] method [RanNum].                  |
    |To do so, it creates an instance [ran] and fills an array [doubArr]|
    |    with the "random" values.                                      |
    +==================================================================*/

    double doubArr[10];

    cout << "Randomly-Populated Array:" << endl;
	
    // Assigns each index with a "random" value using [RanNum]
    for (int count = 0; count < 10; count++) {
        doubArr[count] = ran.RanNum();

        // This outputs a nicely-formatted array.
        if (count < 9) {
            cout << doubArr[count] << ", ";
        }
        else {
            cout << doubArr[count]; 
        }
    }

    cout << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    /*=============================================================+
    |This code block offers another "random" algorithm.            |
    |This algorithm will randomize the location of values [1-10] in|
    |    array [intArr].                                           |
    |To do so, it creates an instance [ran] and fills an array     |
    |    [intArr] with the "random" values of [1-10].              |
    +=============================================================*/

    cout << "Ranged Array:" << endl;

    int intArr[10];
	
    // This loop assigns every index of [intArr] with [0].
    for (int count = 0; count < 10; count++) {
        intArr[count] = 0; 
    }

    int location = 1;
    int freeCount = 10;

    /*======================================================================+
    |This next loop assigns every index of [intArr] with a random value from|
    |    [1-10] with each value appearing only once.                        |
    +======================================================================*/

    for (int count = 0; count < 10; count++) {									
        int skip = floor(freeCount * ran.RanNum() + 1);
				
        while (skip > 0)
        {
            location = (location + 1) % 10;
            if (intArr[location] == 0) {
                skip--;
            }
        }

        intArr[location] = count;
        freeCount -= 1;
    }

    for (int count = 0; count < 10; count++)
    {
        if (count < 9) {
            cout << intArr[count] << ", ";
        } 
        else { 
            cout << intArr[count]; 
        }
    }

    cout << endl;
    cout << endl;
}
