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
#include "MyRandom.h"
#include "utility.h"

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

/*===============================================================+
|This is the main program for Lab #4.                            |
|In this program, two arrays of integers will be sorted using    |
|    [insertionSort], checked with [CheckList], and outputted.   |
|The number of comparisons for the second list will be outputted.|
+===============================================================*/
int main() {
    cout.imbue(locale(""));

    cout << endl;

    // Creates an instance of [MyRandom] to fill the arrays with "random" values
    MyRandom ran = MyRandom();

    int intArr1[20];

    // Fill [intArr1] with random values
    for (int count = 0; count < 20; count++) {
	    intArr1[count] = ran.RanRange(1, 10000);
    }

    insertionSort(intArr1, 20);

    // Checks if [intArr1] is sorted
    if (CheckList(intArr1, 20)) {
        cout << "[intArr1] is sorted." << endl;
    }
    else
    {
        cout << "[intArr1] is not sorted." << endl;
    }

    cout << endl;

    cout << "Here is [intArr1]:" << endl;

    for (int count = 0; count < 20; count++) {
        // This merely outputs a nicely-oriented array.
    	if (count < 19) {
            cout << intArr1[count] << ", ";
        }
	    else {
	        cout << intArr1[count];
	    }
    }

    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;  // Reset [comparisonCount] to zero for the next array.


    int intArr2[50000];

    // Fills [intArr2] with "random" values
    for (int count = 0; count < 50000; count++) {
	    intArr2[count] = ran.RanRange(1, INT_MAX);
    }

    insertionSort(intArr2, 50000);

    cout << endl;

    // Checks if [intArr1] is sorted
    if (CheckList(intArr2, 50000)) {
        cout << "[intArr2] is sorted." << endl;
    }
    else {
        cout << "[intArr1] is not sorted." << endl;
    }


    cout << "There were " << comparisonCount << " comparisons." << endl;

    cout << endl;
}
