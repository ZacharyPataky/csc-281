/*===========================+
|Zachary Pataky              |
|insertionL5.c++             |
|Created: 13 February 2020   |
|Last Modified: 02 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "insertionL5.h"
#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void insertionSort(int aList[], int numElements, int subStart, int increment)
{
    /*=========================================================================+
    |This is function [insertionSort].                                         |
    |Function [insertionSort] takes two parameters [aList, numElements] and    |
    |    returns a sorted list.                                                |
    |Insertion sort sorts an array one element at a time by comparing the      |
    |    current element with all previous elements until the correct place is |
    |    identified.                                                           |
    +--------------------------------------------------------------------------+
    |Parameter [aList] is the list of elements to be sorted.                   |
    |Parameter [numElements] is the integer value of elements in [aList].      |
    |Parameter [subStart] is the beginning of the sublist to be used later in  |
    |    Shell Sort.                                                           |
    |Parameter [increment] is the gap between sub-listed elements to be used   |
    |    later in Shell Sort.                                                  |
    +--------------------------------------------------------------------------+
    |This function compares the value at [index] with the value at [index - 1].|
    |It will swap elements until the condition is found where the value at     |
    |    [index -1] is less than the value at [index].                         |
    |These comparisons are made using function [GreaterThan].                  |
    +=========================================================================*/

    for (int i = subStart; i < numElements; i++)
    {
        int newElement = aList[i];
        int location = i - increment;

        while ((location >= 0) and GreaterThan(aList[location], newElement))
        {
            aList[location + increment] = aList[location];
            location -= increment;
        }

        aList[location + increment] = newElement;
    }
}
