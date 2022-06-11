/*===========================+
|Zachary Pataky              |
|main.c++                    |
|Created: 02 April 2020      |
|Last Modified: 12 April 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

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

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/
int main()
{

    /*=======================================================================+
    |This is the main program for Lab #7.                                    |
    +------------------------------------------------------------------------+
    |There are two parts to this program:                                    |
    |    Part 1:                                                             |
    |        Create an array of twenty integers with random values from the  |
    |            range [1:10,000]. This array should then be sorted with     |
    |            functions [quickSort] and [pivotList].                      |
    |        Create a second array of twenty integers with random values from|
    |            the range [1:10,000]. This array should then be sorted with |
    |            functions [altQuickSort] and [altPivotList].                |
    |    Part 2:                                                             |
    |        This part is about efficiency; efficiency will be counted by the|
    |            final results of [comparisonCount], [swapCount], and [tot]. |
    |        Create an array of 50,000 random integers from range            |
    |            [1:INT_MAX]. This array should then be sorted with          |
    |            [quickSort] in conjunction with [pivotList]. When the array |
    |            is sorted, [comparisonCount], [swapCount], and [tot] should |
    |            then be printed. The approximate amount of comparisons      |
    |            should roughly amount to O(1.4*N*lg(N)).                    |
    |        Create an array of 50,000 random integers from range            |
    |            [1:INT_MAX]. This array should then be sorted with          |
    |            [altQuickSort] in conjunction with [altPivotList]. When the |
    |            array is sorted, [comparisonCount], [swapCount], and [tot]  |
    |            should then be printed. The approximate amount of           |
    |            comparisons should roughly amount to O(1.4*N*lg(N)).        |
    +=======================================================================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

    /*===============================================================+
    |PART ONE                                                        |
    +----------------------------------------------------------------+
    |Create an array of twenty integers with random values from the  |
    |    range [1:10,000]. This array should then be sorted with     |
    |    functions [quickSort] and [pivotList].                      |
    |Create a second array of twenty integers with random values from|
    |    the range [1:10,000]. This array should then be sorted with |
    |    functions [altQuickSort] and [altPivotList].                |
    +===============================================================*/

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

    /*================================+
    |[intArr2] is a copy of [intArr1].|
    +================================*/

    int intArr2[20];       // This creates an array [intArr2] with twenty spaces.

    for (int count = 0; count < 20; count++)
    {
        intArr2[count] = intArr1[count];
    }

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
    cout << "Here is [intArr1] BEFORE being sorted with [quickSort]:" << endl;

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

    quickSort(intArr1, 0, 19);

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr1] AFTER being sorted with [quickSort]:" << endl;

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

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
    cout << "Here is [intArr2] BEFORE being sorted with [altQuickSort]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr2[count] << "; ";
        }

        else
        {
            cout << intArr2[count] << endl;
        }
    }
    
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    altQuickSort(intArr2, 0, 19);

/////////////////////////////////////////////////////////////////////////////////

    cout << "Here is [intArr2] AFTER being sorted with [altQuickSort]:" << endl;

    for (int count = 0; count < 20; count++)
    {
        if (count < 19)           // This merely outputs a nicely-oriented array.
        {
            cout << intArr2[count] << "; ";
        }

        else
        {
            cout << intArr2[count] << endl;
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
    |    results of [comparisonCount], [swapCount], and [tot].                 |
    |Create an array of 50,000 random integers from range [1:INT_MAX]. This    |
    |    array should then be sorted with [quickSort] in conjunction with      |
    |    [pivotList]. When the array is sorted, [comparisonCount], [swapCount],|
    |    and [tot] should then be printed. The approximate amount of           |
    |    comparisons should roughly amount to O(1.4*N*lg(N)).                  |
    |Create an array of 50,000 random integers from range [1:INT_MAX]. This    |
    |    array should then be sorted with [altQuickSort] in conjunction with   |
    |    [altPivotList]. When the array is sorted, [comparisonCount],          |
    |    [swapCount], and [tot] should then be printed. The approximate amount |
    |    of comparisons should roughly amount to O(1.4*N*lg(N)).               |
    +=========================================================================*/

    MyRandom ran2 = MyRandom();         // This creates an instance of [MyRandom]
                                        //     which will be used later to fill
                                        //     [intArr3] with "random" values.

    int intArr3[50000];                   // This creates an array [intArr3] with
                                          //     50000 spaces.

    for (int count = 0; count < 50000; count++)
    {
        intArr3[count] = ran1.RanRange(1, INT_MAX);
    }

    /*============================================================+
    |This for-loop assigns each index of [intArr3] with a "random"|
    |    value using [ran3].                                      |
    +============================================================*/

    /*================================+
    |[intArr4] is a copy of [intArr3].|
    +================================*/

    int intArr4[50000];                   // This creates an array [intArr4] with
                                          //     50000 spaces.

    for(int count = 0; count < 50000; count++)
    {
        intArr4[count] = intArr3[count];
    }

/////////////////////////////////////////////////////////////////////////////////

    cout << "Let's analyze [intArr3]: a 50,000-Element array." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    swapCount = 0;               // Reset [swapCount] to zero for the next array.
    
    quickSort(intArr3, 0, 49999);

    int tot = comparisonCount + swapCount;

    cout << "There were " << comparisonCount << " comparisons with [quickSort]." << endl;
    cout << "There were " << swapCount << " swaps with [quickSort]." << endl;
    cout << "That's a total of "<< tot << " operations." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+------------------------------------------------------+" << endl;
    cout << "Let's analyze [intArr4]: a 50,000-Element array." << endl;
    cout << endl;

/////////////////////////////////////////////////////////////////////////////////

    comparisonCount = 0;   // Reset [comparisonCount] to zero for the next array.
    swapCount = 0;               // Reset [swapCount] to zero for the next array.

    altQuickSort(intArr4, 0, 49999);

    tot = comparisonCount + swapCount;

    cout << "There were " << comparisonCount << " comparisons with [altQuickSort]." << endl;
    cout << "There were " << swapCount << " swaps with [altQuickSort]." << endl;
    cout << "That's a total of "<< tot << " operations." << endl;

/////////////////////////////////////////////////////////////////////////////////

    cout << "+======================================================+" << endl;
}

