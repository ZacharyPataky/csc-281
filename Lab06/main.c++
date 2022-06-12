/*==========================+
|Zachary Pataky             |
|main.c++                   |
|Created: 26 March 2020     |
|Last Modified: 11 June 2022|
+==========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "heapSort.h"
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

int comparisonCount;               // Variable from [utility] used in [heapSort].

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

/*==========================================================================+
|This is the main program for Lab #6.                                       |
+---------------------------------------------------------------------------+
|There are two parts to this program:                                       |
|    Part 1:                                                                |
|        Create an array of twenty integers with random values from the     |
|            range [1:10,000]. This array should then be sorted with        |
|            [heapSort] and printed to prove that it's sorted.              |
|    Part 2:                                                                |
|        This part is about efficiency; efficiency will be counted by the   |
|            final result of [comparisonCount]. Create an array of 50,000   |
|            random integers from the range [1:INT_MAX]. This array should  |
|            then be sorted with [heapSort]. When the array is sorted,      |
|            [comparisonCount] must then be printed. The approximate amount |
|            of work to be done should be O(n*lg(n)).                       |
+==========================================================================*/
int main() {
    /*====================================================================+
    |PART ONE                                                             |
    +---------------------------------------------------------------------+
    |Create an array of twenty integers with random values from the range |
    |    [1:10,000].  This array should then be sorted with [heapSort] and|
    |    printed to prove that it's sorted.                               |
    +====================================================================*/

    // The next line is removed per Dr. McConnell's request as it damages the output
    // cout.imbue(locale(""));  // Adds commas in large numbers for nice formatting

/////////////////////////////////////////////////////////////////////////////////

    // Instance of [MyRandom] used to fill arrays with "random" values
    MyRandom ran = MyRandom();

/////////////////////////////////////////////////////////////////////////////////

    int intArr1[20];

    // Fills [intArr1] with "random" values
    for (int count = 0; count < 20; count++) {
        intArr1[count] = ran.RanRange(1, 10000);
    }

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
    cout << "Here is [intArr1] BEFORE being sorted with [heapSort]:" << endl;

    // This merely outputs a nicely-oriented array.
    for (int count = 0; count < 20; count++) {
        if (count < 19) {
            cout << intArr1[count] << "; ";
        }
        else {
            cout << intArr1[count] << endl;
        }
    }
    
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    heapSort(intArr1, 20);

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr1] AFTER being sorted with [heapSort]:" << endl;

    // This merely outputs a nicely-oriented array.
    for (int count = 0; count < 20; count++) {
        if (count < 19) {
            cout << intArr1[count] << "; ";
        }
        else {
            cout << intArr1[count] << endl;
        }
    }

    cout << "+======================================================+" << endl;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    /*=========================================================================+
    |PART TWO                                                                  |
    +--------------------------------------------------------------------------+
    |This part is about efficiency; efficiency will be counted by the final    |
    |    result of [comparisonCount]. Create an array of 50,000 random integers|
    |    from the range [1:MAX_INT]. This array should then be sorted with     |
    |    [heapSort]. When the array is sorted, [comparisonCount] must then be  |
    |    printed. The approximate amount of work to be done should be          |
    |    O(n*lg(n)).                                                           |
    +=========================================================================*/

    int intArr2[50000];

    // Fills [intArr2] with "random" values
    for (int count = 0; count < 50000; count++) {
        intArr2[count] = ran.RanRange(1, INT_MAX);
    }

/////////////////////////////////////////////////////////////////////////////////

    cout << "Let's analyze [intArr2]: a 50,000-Element array." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    
    heapSort(intArr2, 50000);

    cout << "There were " << comparisonCount << " comparisons with [HeapSort]." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
}
