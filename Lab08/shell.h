/*===========================+
|Zachary Pataky              |
|shell.h                     |
|Created: 27 February 2020   |
|Last Modified: 02 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*===========================================================================+
|This is the header for [shell].                                             |
+----------------------------------------------------------------------------+
|Function [shellSort] takes two parameters [aList, numElements] and returns  |
|    a sorted list.                                                          |
|Shell Sort is an in-place comparison sort.  It sorts pairs of elements      |
|    separated by an [increment] which are then sorted with [Insertion Sort].|
|    The [increment] progressively reduces to a gap of [1] so that the entire|
|    list is sorted.                                                         |
+----------------------------------------------------------------------------+
|Parameter [aList] is the list of elements to be sorted.                     |
|Parameter [numElements] is the integer value of elements in [aList].        |
+===========================================================================*/

void shellSort(int aList[], int numElements);
void shellSort2Pass(int aList[], int numElements);
