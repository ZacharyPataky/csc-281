/*==========================+
|Zachary Pataky             |
|main.c++                   |
|Created: 27 February 2020  |
|Last Modified: 11 June 2022|
+==========================*/

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
int main() {

cout.imbue(locale(""));  // Adds commas in large numbers for nice formatting

// Instance of [MyRandom] used to fill arrays with "random" values
MyRandom ran = MyRandom();

////////////////////////////////////////////////////////////////////////////////
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

    int intArr1[20];

    //  Fills [intArr1] with "random" values
    for (int count = 0; count < 20; count++) {
        intArr1[count] = ran.RanRange(1, 10000);
    }

/////////////////////////////////////////////////////////////////////////////////

    int intArr2[20];

    // Copies the contents of [intArr1] into [intArr2]
    for (int count = 0; count < 20; count++) {
        intArr2[count] = intArr1[count];
    }

/////////////////////////////////////////////////////////////////////////////////

    shellSort(intArr1, 20);             // This sorts [intArr1] with [shellSort].
    shellSort2Pass(intArr2, 20);   // This sorts [intArr2] with [shellSort2Pass].

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr1] after being sorted with [shellSort]:" << endl;

    for (int count = 0; count < 20; count++) {
        // This merely outputs a nicely-oriented array.
        if (count < 19) {
            cout << intArr1[count] << ", ";
        }
        else {
            cout << intArr1[count] << endl;
        }
    }

    cout << endl;                         // Prints an empty line for formatting.

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr2] after being sorted with [shellSort2Pass]:" << endl;

    for (int count = 0; count < 20; count++) {
        // This merely outputs a nicely-oriented array.
        if (count < 19) {
            cout << intArr2[count] << ", ";
        }
        else {
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

    int insertionArr[50000];

    // Fill [intArr2] with "random" values
    for (int count = 0; count < 50000; count++) {
        insertionArr[count] = ran.RanRange(1, INT_MAX);
    }

/////////////////////////////////////////////////////////////////////////////////

    int shellArr[50000];

    // Assigns indeces of [shellArr] with the matching value from [insertionArr]
    for (int count = 0; count < 50000; count++) {
        shellArr[count] = insertionArr[count];
    }

/////////////////////////////////////////////////////////////////////////////////

    int shell2Arr[50000];

    // Assigns indeces of [shell2Arr] with the matching value from [insertionArr]
    for (int count = 0; count < 50000; count++) {
        shell2Arr[count] = insertionArr[count];
    }

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    insertionSort(insertionArr, 50000, 1, 1);

    cout << "There were " << comparisonCount << " comparisons with [insertionSort]." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    shellSort(shellArr, 50000);

    cout << "There were " << comparisonCount << " comparisons with [shellSort]." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    shellSort2Pass(shell2Arr, 50000);

    cout << "There were " << comparisonCount << " comparisons with [shellSort2Pass]." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
}
