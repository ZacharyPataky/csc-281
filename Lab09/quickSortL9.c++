/*==========================+
|Zachary Pataky             |
|quickSortL9.c++            |
|Created: 22 April 2020     |
|Last Modified: 11 June 2022|
+==========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "quickSortL9.h"
#include "pivotListL9.h"
#include "utility.h"
#include "edge.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*==========================================================================+
|This is the code for [quickSortL9].                                        |
+---------------------------------------------------------------------------+
|Function [quickSortL9] represents the sorting algorithm Quick Sort. This   |
|    function is used in conjunction with [pivotListL9] to Quick Sort       |
|    desired arrays.                                                        |
|Quick Sort is a sorting algorithm whereby an array is partitioned with     |
|    specific elements acting as pivots to correctly sort compared elements.|
|    Quick Sort has the time complexity O(N^2).                             |
+---------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                 |
|Parameter [first] is the index of the first element in the part of         |
|    [anArray] to sort.                                                     |
|Parameter [last] is the index of the last element in the part of [anArray] |
|    [anArray] to sort.                                                     |
+==========================================================================*/
void quickSortL9(edge anArray[], int first, int last) {
    if (first < last) {
        int pivot = pivotListL9(anArray, first, last);
        quickSortL9(anArray, first, pivot-1);
        quickSortL9(anArray, pivot+1, last);
    }
}
