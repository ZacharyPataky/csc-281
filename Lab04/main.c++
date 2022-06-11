/*==============================+
|Zachary Pataky                 |
|main.c++                       |
|Created: 13 February 2020      |
|Last Modified: 19 February 2020|
+==============================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "insertion.h"
#include "utility.h"
#include "MyRandom.h"

#include <iostream>
#include <limits.h>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|VARIABLE|
+=======*/

int comparisonCount;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

int main()
{
    /*===============================================================+
    |This is the main program for Lab #4.                            |
    |In this program, two arrays of integers will be sorted using    |
    |    [insertionSort], checked with [CheckList], and outputted.   |
    |The number of comparisons for the second list will be outputted.|
    +===============================================================*/

    cout.imbue(locale(""));

    cout << endl;                         // Prints an empty line for formatting.

    MyRandom ran1 = MyRandom();      // This creates an instance of [MyCharacter]
                                     //     which will be used later to fill
                                     //     [intArr1] with "random" values.

    int intArr1[20];       // This creates an array [intArr1] with twenty spaces.

    for (int count = 0; count < 20; count++)  // This for-loop assigns each index
    {                                         //     of [intArr1] with a "random"
	intArr1[count] = ran1.RanRange(1, 10000); //    value using [ran1].
    }

    insertionSort(intArr1, 20);                          // This sorts [intArr1].

    if (CheckList(intArr1, 20))          // This checks the sorting of [intArr1].
    {                                    // If sorted, [true] is returned;
                                         //     otherwise, [false] is returned.
        cout << "[intArr1] is sorted." << endl;

    }

    else
    {

        cout << "[intArr1] is not sorted." << endl;

    }

    cout << endl;                         // Prints an empty line for formatting.

    cout << "Here is [intArr1]:" << endl;

    for (int count = 0; count < 20; count++)
    {
	if (count < 19)           // This merely outputs a nicely-oriented array.
	{
            cout << intArr1[count] << ", ";     // Commas after all values unless
	}                                       //     it's the final value.

	else
	{
	    cout << intArr1[count];
	}
    }

    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.

    MyRandom ran2 = MyRandom();      // This creates an instance of [MyCharacter]
                                     //     which will be used later to fill
                                     //     [intArr2] with "random" values.

    int intArr2[50000];       // This creates array [intArr2] with 50,000 spaces.

    for (int count = 0; count < 50000; count++)     // This for-loop assigns each
    {                                               //     index of [intArr2]
	intArr2[count] = ran2.RanRange(1, INT_MAX); //     with a "random" value
    }                                               //     using [ran2].

    insertionSort(intArr2, 50000);                       // This sorts [intArr2].

    cout << endl;                         // Prints an empty line for formatting.

    if (CheckList(intArr2, 50000))       // This checks the sorting of [intArr2].
    {                                    // If sorted, [true] is returned;
                                         //     otherwise, [false] is returned.
        cout << "[intArr2] is sorted." << endl;

    }

    else
    {

        cout << "[intArr1] is not sorted." << endl;

    }


    cout << "There were " << comparisonCount << " comparisons." << endl;

    cout << endl;                         //Prints an empty line for formatting.
}
