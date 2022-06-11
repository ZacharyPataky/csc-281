/*===========================+
|Zachary Pataky              |
|main.c++                    |
|Created: 10 February 2020   |
|Last Modified: 23 March 2021|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include <iostream>
#include <cmath>

#include "MyRandom.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

int main()
{
    /*===================================================================+
    |This is the main program for Lab #3.                                |
    |This will test class [MyRandom] method [RanNum] and another "random"|
    |    algorithm.                                                      |
    +===================================================================*/

    cout << endl;                        // Prints and empty line for formatting.

    MyRandom ran = MyRandom();       // This creates an instance of [MyCharacter]
                                     //     which will be used later to fill
                                     //     both arrays with "random" values.

/////////////////////////////////////////////////////////////////////////////////

    /*==================================================================+
    |This code block tests [MyRandom] method [RanNum].                  |
    |To do so, it creates an instance [ran] and fills an array [doubArr]|
    |    with the "random" values.                                      |
    +==================================================================*/

    double doubArr[10];          // This creates array [doubArr] with ten spaces.

    cout << "Randomly-Populated Array:" << endl;
	
    for (int count = 0; count < 10; count++) // This for-loop assigns each index
    {                                        //      of [doubArr] with a "random"
        doubArr[count] = ran.RanNum();	     //     variable using [RanNum].

        // This outputs a nicely-formatted array.
        if (count < 9) { cout << doubArr[count] << ", "; }
        else { cout << doubArr[count]; }
    }

    cout << endl;                         // Prints an empty line for formatting.
    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    /*=============================================================+
    |This code block offers another "random" algorithm.            |
    |This algorithm will randomize the location of values [1-10] in|
    |    array [intArr].                                           |
    |To do so, it creates an instance [ran] and fills an array     |
    |    [intArr] with the "random" values of [1-10].              |
    +=============================================================*/

    cout << "Ranged Array:" << endl;

    int intArr[10];               // This creates array [intArr] with ten spaces.
	
    // This loop assigns every index of [intArr] with [0].
    for (int count = 0; count < 10; count++) { intArr[count] = 0; }

    int location = 1;
    int freeCount = 10;

    /*======================================================================+
    |This next loop assigns every index of [intArr] with a random value from|
    |    [1-10] with each value appearing only once.                        |
    +======================================================================*/

    for (int count = 0; count < 10; count++)
    {									
        int skip = floor(freeCount * ran.RanNum() + 1);
				
        while (skip > 0)
        {
            location = (location + 1) % 10;

            if (intArr[location] == 0) { skip--; }
        }

        intArr[location] = count;
        freeCount -= 1;
    }

    for (int count = 0; count < 10; count++)
    {
        if (count < 9) { cout << intArr[count] << ", "; } 
        else { cout << intArr[count]; }
    }

    cout << endl;                        // Prints and empty line for formatting.
    cout << endl;                        // Prints and empty line for formatting.
}
