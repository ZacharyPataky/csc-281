/*==========================+
|Zachary Pataky             |
|utility.c++                |
|Created: 13 February 2020  |
|Last Modified: 11 June 2022|
+==========================*/

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

// This is used in function [GreaterThan] to count the number of comparisons made
extern int comparisonCount;

// This is used in function [Swap] to count the number of swaps made
extern int swapCount;

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
bool CheckList(edge aList[], int listSize) {
    for (int index = 1; index < listSize; index++) {
        if (aList[index].weight > aList[index - 1].weight) {
            index++;
        }
        else {
            return false;
        }
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
|This function first increments variable [comparisonCount].                 |
|If [int1] is greater than [int2], [true] is returned.                      |
|If [int1] is less than [int2], [false] is returned.                        |
+==========================================================================*/
bool GreaterThan(int int1, int int2) {
    comparisonCount += 1;

    return (int1 > int2);
}

/////////////////////////////////////////////////////////////////////////////////

/*========================================================================+
|This is function [Swap].                                                 |
|Function [Swap] takes two parameters [int1, int2] and swaps their values.|
|Parameter [edge1] is an [edge].                                          |
|Parameter [edge2] is an [edge].                                          |
+========================================================================*/
void Swap(edge &edge1, edge &edge2) {
    swapCount += 1;

    edge temp = edge1;
    edge1 = edge2;
    edge2 = temp;
}
