/*==========================+
|Zachary Pataky             |
|main.c++                   |
|Created: 16 April 2020     |
|Last Modified: 11 June 2020|
+==========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "shell.h"
#include "insertion.h"
#include "insertionL5.h"
#include "heapSort.h"
#include "fixHeap.h"
#include "quickSort.h"
#include "altQuickSort.h"
#include "pivotList.h"
#include "altPivotList.h"
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
int swapCount;

int cycleCount = 5;

long int insertionCount = 0, heapCount = 0, quickCount = 0;
long int altQuickCount = 0, shellCount = 0, altShellCount = 0;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

/*======================================================================+
|This is the main program for Lab #8.                                   |
+-----------------------------------------------------------------------+
|This lab is a comparison of [insertionSort], [heapSort], [quickSort],  |
|    [altQuickSort], [shellSort], and [shellSort2Pass].                 |
|An outer process will run through the following process [five] times:  |
|    1. Creating, filling, and copying the array.                       |
|        a. [intArray] consists of 50,000 random integers from range    |
|            [1:INT_MAX].                                               |
|    2. Sorting a copy of the array with each of the six sorts.         |
|    3. Save the number of comparisons in the proper variable and reset |
|        the counter.                                                   |
|After this process is completed, the average for each algorithm will be|
|    outputted.                                                         |
+======================================================================*/
int main() {
    cout.imbue(locale(""));  // Adds commas in large numbers for nice formatting.

/////////////////////////////////////////////////////////////////////////////////

    // Instance of [MyRandom] used to fill arrays with "random" values
    MyRandom ran1 = MyRandom(INT_MAX/2);

/////////////////////////////////////////////////////////////////////////////////

    /*=========+
    |Outer-Loop|
    +=========*/

    for(int count = 0; count < cycleCount; count++)
    {
        int intArr1[50000];
        int intArr2[50000];
        int intArr3[50000];
        int intArr4[50000];
        int intArr5[50000];
        int intArr6[50000];

        // Fills [intArr1] with "random" values
        for (int count = 0; count < 50000; count++) {
            intArr1[count] = ran1.RanRange(1, INT_MAX);
        }

        // Copies the contents of [intArr1] into the other arrays
        for (int count = 0; count < 50000; count++) {
            intArr2[count] = intArr1[count];
            intArr3[count] = intArr1[count];
            intArr4[count] = intArr1[count];
            intArr5[count] = intArr1[count];
            intArr6[count] = intArr1[count];
        }

/////////////////////////////////////////////////////////////////////////////////

        /*======================================================================+
        |This section resets [comparisonCount] for each sorting algorithm, calls|
        |    each sorting algorithm, and updates the appropriate counter        |
        |    variable for each sorting algorithm.  This whole section is simply |
        |    summing the amount of comparisons for each pass of each sorting    |
        |    algorithm so the average can later be decided.                     |
        +======================================================================*/

        // [insertionSort]
        comparisonCount = 0;
        insertionSort(intArr1, 50000);
        insertionCount += comparisonCount;

        // [heapSort]
        comparisonCount = 0;
        heapSort(intArr2, 50000);
        heapCount += comparisonCount;

        // [quickSort]
        comparisonCount = 0;
        quickSort(intArr3, 0, 49999);
        quickCount += comparisonCount;

        // [altQuickSort]
        comparisonCount = 0;
        altQuickSort(intArr4, 0, 49999);
        altQuickCount += comparisonCount;

        // [shellSort]
        comparisonCount = 0;
        shellSort(intArr5, 50000);
        shellCount += comparisonCount;

        // [shellSort2Pass]
        comparisonCount = 0;
        shellSort2Pass(intArr6, 50000);
        altShellCount += comparisonCount;
    }

/////////////////////////////////////////////////////////////////////////////////

    /*===================+
    |Average Calculations|
    +===================*/

    insertionCount /= cycleCount;
    heapCount /= cycleCount;
    quickCount /= cycleCount;
    altQuickCount /= cycleCount;
    shellCount /= cycleCount;
    altShellCount /= cycleCount;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
    cout << "There were " << insertionCount << " comparisons with [insertionSort]." << endl;
    cout << "There were " << heapCount << " comparisons with [HeapSort]." << endl;
    cout << "There were " << quickCount << " comparisons with [quickSort]." << endl;
    cout << "There were " << altQuickCount << " comparisons with [altQuickSort]." << endl;
    cout << "There were " << shellCount << " comparisons with [shellSort]." << endl;
    cout << "There were " << altShellCount << " comparisons with [shellSort2Pass]." << endl;
    cout << "+======================================================+" << endl;
}