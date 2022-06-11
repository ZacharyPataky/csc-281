/*===========================+
|Zachary Pataky              |
|fixHeap.h                   |
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
|This is the header for [fixHeap].                                             |
+------------------------------------------------------------------------------+
|Function [fixHeap] takes four parameters [anArray, root, key, bound] and   |
|    returns an array organized like a heap.                                |
|FixHeap is a recursive algorithm used by Heap Sort to convert a standard   |
|    array into a heap.  It does so by comparing the values of every element|
|    and positioning them in a heap-like fashion in an array.               |
+------------------------------------------------------------------------------+
|Parameter [anArray] is the array of elements to be sorted.                    |
|Parameter [root] is the index of the root of the heap.                        |
|Parameter [key] is the key value that needs to be reinserted into the heap.   |
|Parameter [bound] is the upper limit (index) of the heap.                     |
+=============================================================================*/

void fixHeap(int anArray[], int root, int key, int bound);
