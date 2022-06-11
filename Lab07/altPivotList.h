/*===========================+
|Zachary Pataky              |
|altPivotList.h              |
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
|This is the header for [altPivotList].                                      |
+----------------------------------------------------------------------------+
|Function [altPivotList] is a partition function used in conjunction with    |
|    function [altQuickSort].  This partition algorithm introduces two with  |
|    one ascending the array from the bottom and the other descending the    |
|    array from the top. Swaps appropriately occur and the indeces change    |
|    position.  This happens until the indeces cross.                        |
+----------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                  |
|Parameter [first] is the index of the first element in the part of [anArray]|
|    to sort.                                                                |
|Parameter [last] is the index of the last element in the part of [anArray]  |
|    to sort.                                                                |
+===========================================================================*/

int altPivotList(int anArray[], int first, int last);
