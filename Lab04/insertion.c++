/*===========================+
|Zachary Pataky              |
|insertion.c++               |
|Created: 13 February 2020   |
|Last Modified: 03 April 2021|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "insertion.h"
#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*=========================================================================+
|This is function [insertionSort].                                         |
|Function [insertionSort] takes two parameters [aList, numElements] and    |
|    returns a sorted list.                                                |
|Insertion sort sorts an array one element at a time by comparing the      |
|    current element with all previous elements until the correct place is |
identified.                                                           |
|Parameter [aList] is the list of elements to be sorted.                   |
|Parameter [numElements] is the integer value of elements in [aList].      |
+--------------------------------------------------------------------------+
|This function compares the value at [index] with the value at [index - 1].|
|It will swap elements until the condition is found where the value at     |
|    [index -1] is less than the value at [index].                         |
|These comparisons are made using function [GreaterThan].                  |
+=========================================================================*/
void insertionSort(int aList[], int numElements)
{
    for (int i = 1; i < numElements; i++)
    {
        int newElement = aList[i];
        int location = i - 1;

        while ((location >= 0) && GreaterThan(aList[location], newElement)) {
            aList[location + 1] = aList[location];
            location -= 1;
        }

        aList[location + 1] = newElement;
    }
}
