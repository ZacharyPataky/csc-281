/*===========================+
|Zachary Pataky              |
|main.c++                    |
|Created: 27 February 2020   |
|Last Modified: 09 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "insertionL5.h"
#include "shell.h"
#include "utility.h"
#include "MyRandom.h"

#include <limits.h>
#include <iostream>
#include <cmath>

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
    /*==========================================================================+
    |This is the main program for Lab #5.                                       |
    |There are two parts to this program:                                       |
    |    Part 1:                                                                |
    |        Two arrays of random values are created with the second being a    |
    |            copy of the first one.  The first array is sorted using        |
    |            [shellSort] and the second array is sorted using               |
    |            [shellSort2Pass].                                              |
    |    Part 2:                                                                |
    |        Three arrays of random values are created with the second and third|
    |            being copies of the first one.  The first array is sorted using|
    |            [insertionSortL5], the second array is sorted using            |
    |            [shellSort], and the third array is sorted using               |
    |            [shellSort2Pass].  Each of their respective [comparisonCount]  |
    |            values will then be printed.                                   |
    +==========================================================================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    /*==================================================================+
    |PART ONE                                                           |
    +-------------------------------------------------------------------+
    |Two arrays of random values are created with the second being a    |
    |    copy of the first one.  The first array is sorted using        |
    |    [shellSort] and the second array is sorted using               |
    |    [shellSort2Pass].                                              |
    +==================================================================*/

    cout.imbue(locale(""));  // Adds commas in large numbers for nice formatting.

/////////////////////////////////////////////////////////////////////////////////

    MyRandom ran1 = MyRandom();      // This creates an instance of [MyCharacter]
                                     //     which will be used later to fill
                                     //     [intArr1] with "random" values.

/////////////////////////////////////////////////////////////////////////////////

    int intArr1[20];       // This creates an array [intArr1] with twenty spaces.

    for (int count = 0; count < 20; count++)  // This for-loop assigns each index
    {                                         //     of [intArr1] with a "random"
        intArr1[count] = ran1.RanRange(1, 10000); //     value using [ran1].
    }

/////////////////////////////////////////////////////////////////////////////////

    int intArr2[20];       // This creates an array [intArr2] with twenty spaces.

    for (int count = 0; count < 20; count++) // This for-loop copies the contents
    {                                        //     of [intArr1] into [intArr2].
        intArr2[count] = intArr1[count];
    }

/////////////////////////////////////////////////////////////////////////////////

    shellSort(intArr1, 20);             // This sorts [intArr1] with [shellSort].

    shellSort2Pass(intArr2, 20);   // This sorts [intArr2] with [shellSort2Pass].

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr1] after being sorted with [shellSort]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr1[count] << ", ";
        }

        else
        {
            cout << intArr1[count] << endl;
        }
    }

    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr2] after being sorted with [shellSort2Pass]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr2[count] << ", ";
        }

        else
        {
            cout << intArr2[count];
        }
    }

    cout << endl;                         // Prints an empty line for formatting.
    cout << "+======================================================+" << endl;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    /*==================================================================+
    |PART TWO                                                           |
    +===================================================================+
    |Three arrays of random values are created with the second and third|
    |    being copies of the first one.  The first array is sorted using|
    |    [insertionSortL5], the second array is sorted using            |
    |    [shellSort], and the third array is sorted using               |
    |    [shellSort2Pass].  Each of their respective [comparisonCount]  |
    |    values will then be printed.                                   |
    +==================================================================*/

    MyRandom ran2 = MyRandom();      // This creates an instance of [MyCharacter]
                                     //     which will be used later to fill
                                     //     [intArr3] with "random" values.


    int insertionArr[50000];         // This creates an array [insertionArr] with
                                     //     50000 spaces.

    for (int count = 0; count < 50000; count++)
    {
        insertionArr[count] = ran1.RanRange(1, INT_MAX);
    }

    /*=================================================================+
    |This for-loop assigns each index of [insertionArr] with a "random"|
    |    value using [ran2].                                           |
    +=================================================================*/

/////////////////////////////////////////////////////////////////////////////////

    int shellArr[50000];  // This creates an array [shellArr] with 50,000 spaces.

    for (int count = 0; count < 50000; count++)
    {
        shellArr[count] = insertionArr[count];
    }

    /*=====================================================================+
    |This for-loop assigns each index of [shellArr] with the corresponding"|
    |    value using from [insertionArr].                                  |
    +=====================================================================*/

/////////////////////////////////////////////////////////////////////////////////

    int shell2Arr[50000]; // This creates an array [shell2Arr] with 50,000 spaces.

    for (int count = 0; count < 50000; count++)
    {
        shell2Arr[count] = insertionArr[count];
    }

    /*======================================================================+
    |This for-loop assigns each index of [shell2Arr] with the corresponding"|
    |    value using from [insertionArr].                                   |
    +======================================================================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    insertionSort(insertionArr, 50000, 1, 1);   // This sorts [insertionArr] with
                                                //     [insertionSort].

    cout << "There were " << comparisonCount << " comparisons with [insertionSort]." << endl;
    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    shellSort(shellArr, 50000);        // This sorts [shellArr] with [shellSort].

    cout << "There were " << comparisonCount << " comparisons with [shellSort]." << endl;
    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    shellSort2Pass(shell2Arr, 50000);              // This sorts [shell2Arr] with
                                                   //     [shellSort2Pass].

    cout << "There were " << comparisonCount << " comparisons with [shellSort2Pass]." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
}
