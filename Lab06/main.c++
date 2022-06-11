/*===========================+
|Zachary Pataky              |
|main.c++                    |
|Created: 26 March 2020      |
|Last Modified: 27 March 2020|
+===========================*/

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

int main()
{

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

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    /*====================================================================+
    |PART ONE                                                             |
    +---------------------------------------------------------------------+
    |Create an array of twenty integers with random values from the range |
    |    [1:10,000].  This array should then be sorted with [heapSort] and|
    |    printed to prove that it's sorted.                               |
    +====================================================================*/

    // The next line is removed per Dr. McConnell's request.
    //     This damages the output.
    // cout.imbue(locale(""));  // Adds commas in large numbers for nice formatting.

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

    cout << "+======================================================+" << endl;
    cout << "Here is [intArr1] BEFORE being sorted with [heapSort]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr1[count] << "; ";
        }

        else
        {
            cout << intArr1[count] << endl;
        }
    }
    
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    heapSort(intArr1, 20);              // This performs [heapSort] on [intArr1].

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr1] AFTER being sorted with [heapSort]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr1[count] << "; ";
        }

        else
        {
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

    MyRandom ran2 = MyRandom();         // This creates an instance of [MyRandom]
                                        //     which will be used later to fill
                                        //     [intArr2] with "random" values.

    int intArr2[50000];                   // This creates an array [intArr2] with
                                          //     50000 spaces.

    for (int count = 0; count < 50000; count++)
    {
        intArr2[count] = ran1.RanRange(1, INT_MAX);
    }

    /*============================================================+
    |This for-loop assigns each index of [intArr2] with a "random"|
    |    value using [ran2].                                      |
    +============================================================*/

/////////////////////////////////////////////////////////////////////////////////

    cout << "Let's analyze [intArr2]: a 50,000-Element array." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    
    heapSort(intArr2, 50000);           // This performs [heapSort] on [intArr2].

    cout << "There were " << comparisonCount << " comparisons with [HeapSort]." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;

}
