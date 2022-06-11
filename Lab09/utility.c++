/*=============================+
|Zachary Pataky                |
|utility.c++                   |
|Created: 13 February 2020     |
|Last Modified: 26 October 2020|
+=============================*/

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

extern int comparisonCount;    // This is used in function [GreaterThan] to count
                               //     the number of comparisons made.

extern int swapCount;          // This is used in function [Swap] to count the
                               //     number of swaps made.

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

bool CheckList(edge aList[], int listSize)
{
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

    for (int index = 1; index < listSize; index++)
    {
        if (aList[index].weight > aList[index - 1].weight)
        {
            index++;
        }

        else
        {
            return false;
        }
    }

    return true;
}

/////////////////////////////////////////////////////////////////////////////////

bool GreaterThan(int int1, int int2)
{
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

    comparisonCount += 1;

    if (int1 > int2)
    {
        return true;
    }

    else
    {
	return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////

void Swap(edge &edge1, edge &edge2)
{
    /*========================================================================+
    |This is function [Swap].                                                 |
    |Function [Swap] takes two parameters [int1, int2] and swaps their values.|
    |Parameter [edge1] is an [edge].                                          |
    |Parameter [edge2] is an [edge].                                          |
    +========================================================================*/

    swapCount += 1;

    edge temp = edge1;
    edge1 = edge2;
    edge2 = temp;
}
