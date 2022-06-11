/*===========================+
|Zachary Pataky              |
|insertionL5.h               |
|Created: 13 February 2020   |
|Last Modified: 02 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*=============================================================================+
|This is the header for [insertion].                                           |
+------------------------------------------------------------------------------+
|Function [insertionSort] takes two parameters [aList, numElements] and returns|
|    a sorted list.                                                            |
|Insertion sort sorts an array one element at a time by comparing the current  |
|    element with all previous elements until the correct place is identified. |
+------------------------------------------------------------------------------+
|Parameter [aList] is the list of elements to be sorted.                       |
|Parameter [numElements] is the integer value of elements in [aList].          |
|Parameter [subStart] is the beginning of the sublist to be used later in Shell|
|    Sort.                                                                     |
|Parameter [increment] is the gap between sub-listed elements to be used later |
|    later in Shell Sort.                                                      |
+=============================================================================*/

void insertionSort(int aList[], int numElements, int subStart, int increment);
