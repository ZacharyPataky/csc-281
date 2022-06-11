/*===========================+
|Zachary Pataky              |
|pivotList.h                 |
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
|This is the header for [pivotList].                                         |
+----------------------------------------------------------------------------+
|Function [pivotList] is a partition algorithm used in conjunction with      |
|    function [quickSort]. This algorithm picks the first element of the     |
|    array as its pivot element and will set the pivot point as the first    |
|    location of the list. After some of the elemments are compared to the   |
|    pivot inside the loop, four parts to the list will be produced.         |
+----------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                  |
|Parameter [first] is the index of the first element in the part of [anArray]|
|    to sort.                                                                |
|Parameter [last] is the index of the last element in the part of [anArray]  |
|    to sort.                                                                |
+===========================================================================*/

int pivotList(int anArray[], int first, int last);
