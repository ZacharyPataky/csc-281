/*===========================+
|Zachary Pataky              |
|heapSort.h                  |
|Created: 26 March 2020      |
|Last Modified: 27 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*=============================================================================+
|This is the header for [heapSort].                                            |
+------------------------------------------------------------------------------+
|Function [heapSort] takes two parameters [anArray, numElements] and returns a |
|    sorted array.                                                             |
|Heap Sort is a comparison-based sorting algorithm whereby the input is divided|
|    into a sorted region and an unsorted region.  The unsorted region shrinks |
|    as its largest element is extracted and inserted to the sorted region.    |
+------------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                    |
|Parameter [numElements] is the integer value of elements in [anArray].        |
+=============================================================================*/

void heapSort(int anArray[], int numElements);
