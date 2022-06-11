/*===========================+
|Zachary Pataky              |
|altQuickSort.h              |
|Created: 02 April 2020      |
|Last Modified: 12 April 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*===========================================================================+
|This is the header for [altQuickSort].                                      |
+----------------------------------------------------------------------------+
|Function [altQuickSort] represents the sorting algorithm Quick Sort. This   |
|    function is used in conjunction with [altPivotList] to Quick Sort       |
|    desired arrays.                                                         |
|Quick Sort is a sorting algorithm whereby an array is partitioned with      |
|    specific elements acting as pivots to correctly sort compared elements. |
|    Quick Sort has the time complexity O(N^2).                              |
+---------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                  |
|Parameter [first] is the index of the first element in the part of [anArray]|
|    to sort.                                                                |
|Parameter [last] is the index of the last element in the part of [anArray]  |
|    to sort.                                                                |
+===========================================================================*/

void altQuickSort(int anArray[], int first, int last);
