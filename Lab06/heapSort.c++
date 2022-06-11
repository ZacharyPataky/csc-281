/*===========================+
|Zachary Pataky              |
|heapSort.c++                |
|Created: 26 March 2020      |
|Last Modified: 27 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "heapSort.h"
#include "fixHeap.h"
#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void heapSort(int anArray[], int numElements)
{
    /*==========================================================================+
    |This is the code for [heapSort].                                           |
    +---------------------------------------------------------------------------+
    |Function [heapSort] takes two parameters [anArray, numElements] and returns|
    |    a sorted array.                                                        |
    |Heap Sort is a comparison-based sorting algorithm whereby the input is     |
    |    divided into a sorted region and an unsorted region.  The unsorted     |
    |    region shrinks as its largest element is extracted and inserted to the |
    |    sorted region.                                                         |
    +---------------------------------------------------------------------------+
    |Parameter [anArray] is the array of elements to be sorted.                 |
    |Parameter [numElements] is the integer value of elements in [anArray].     |
    +==========================================================================*/

    for (int i = (numElements/2); i >= 0; i--)
    {
        /*================================+
        |This turns [anArray] into a heap.|
        +================================*/

        fixHeap(anArray, i, anArray[i], numElements);
    }

/////////////////////////////////////////////////////////////////////////////////

    for (int i = numElements - 1; i >= 1; i--)
    {
        int max = anArray[0];
        fixHeap(anArray, 0, anArray[i], i);
        anArray[i] = max;
    }

}
