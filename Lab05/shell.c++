/*===========================+
|Zachary Pataky              |
|shell.c++                   |
|Created: 27 February 2020   |
|Last Modified: 10 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "shell.h"
#include "insertionL5.h"
#include "utility.h"

#include <limits.h>
#include <cmath>
#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void shellSort(int aList[], int numElements)
{
    /*=========================================================================+
    |[shellSort] is an in-place comparison sort.  Sub-lists are created by     |
    |    joining together elements in the super-list using a value called an   |
    |    [increment].  For each pass, the sub-lists are sorted using insertion |
    |    sort.  In addition, the gap between elements is reduced until there's |
    |    an increment of [1].                                                  |
    +--------------------------------------------------------------------------+
    |Parameter [aList] is a list representing the list to be sorted.           |
    |Parameter [numElements] is an integer representing the length of the list.|
    +=========================================================================*/

    int passes = floor(log2(numElements));                                  // 15

    while (passes >= 1)
    {
        int increment = pow(2, passes) - 1;                             // 32,767

        for (int start = 0; start < increment; start += increment)
        {
            insertionSort(aList, numElements, start, increment);
        }

        passes -= 1;
    }
}

void shellSort2Pass(int aList[], int numElements)
{
    /*=========================================================================+
    |[shellSort] is an in-place comparison sort.  Sub-lists are created by     |
    |    joining together elements in the super-list using a value called an   |
    |    [increment].  For each pass, the sub-lists are sorted using insertion |
    |    sort.  In addition, the gap between elements is reduced until there's |
    |    an increment of [1].                                                  |
    |[shellSort2Pass] on the other hand, loops with an increment of 1.72(sqrt)N|
    |    then a single increment of [1].                                       |
    +--------------------------------------------------------------------------+
    |Parameter [aList] is a list representing the list to be sorted.           |
    |Parameter [numElements] is an integer representing the length of the list.|
    +=========================================================================*/

    int passes = 2;

    double increment = 1.72 * sqrt(numElements);

    while (passes >= 1)
    {
        for (int start = 0; start < increment; start += increment)
        {
            insertionSort(aList, numElements, start, increment);
        }

        increment = 1;
        passes -= 1;
    }
}

