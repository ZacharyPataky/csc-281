/*===========================+
|Zachary Pataky              |
|utility.c++                 |
|Created: 13 February 2020   |
|Last Modified: 03 April 2021|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|VARIABLE|
+=======*/

// Used in [GreaterThan] to count the number of comparisons made
extern int comparisonCount;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*======================================================================+
|This is function [CheckList].                                          |
|Function [CheckList] takes two parameters [aList, listSize] and returns|
|    [True] if the list is in increasing order and [False] otherwise.   |
|Parameter [aList] is a list.                                           |
|Parameter [listSize] is an integer.                                    |
+-----------------------------------------------------------------------+
|This function iterates over [aList], comparing elements at indeces     |
|    [index] and [index - 1].                                           |
|Returns [false] when the first unsorted element is found.              |
|If no elements are unsorted, [true] is returned.                       |
+======================================================================*/
bool CheckList(int aList[], int listSize) {
    for (int index = 1; index < listSize; index++)
    {
        if (aList[index] <= aList[index - 1]) { return false; }
    }

    return true;
}

/////////////////////////////////////////////////////////////////////////////////

/*==========================================================================+
|This is function [GreaterThan].                                            |
|Function [GreaterThan] takes two parameters [int1, int2] and returns [True]|
|    if the first argument is greater than the second argument and [False]  |
|    otherwise.                                                             |
|Every call of [GreaterThan] increments variable [comparisonCount].         |
+---------------------------------------------------------------------------+
|This function first increments varialbe [comparisonCount].                 |
|If [int1] is greater than [int2], [true] is returned.                      |
|If [int1] is less than [int2], [false] is returned.                        |
+==========================================================================*/
bool GreaterThan(int int1, int int2) {
    comparisonCount += 1;
    return (int1 > int2);
}
