/*===========================+
|Zachary Pataky              |
|fixHeap.c++                 |
|Created: 26 March 2020      |
|Last Modified: 27 March 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "fixHeap.h"
#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void fixHeap(int anArray[], int root, int key, int bound)
{
    /*==========================================================================+
    |This is the code for [fixHeap].                                            |
    +---------------------------------------------------------------------------+
    |Function [fixHeap] takes four parameters [anArray, root, key, bound] and   |
    |    returns an array organized like a heap.                                |
    |FixHeap is a recursive algorithm used by Heap Sort to convert a standard   |
    |    array into a heap.  It does so by comparing the values of every element|
    |    and positioning them in a heap-like fashion in an array.               |
    +---------------------------------------------------------------------------+
    |Parameter [anArray] is the array of elements to be sorted.                 |
    |Parameter [root] is the index of the root of the heap.                     |
    |Parameter [key] is the key value that needs to be reinserted into the heap.|
    |Parameter [bound] is the upper limit (index) of the heap.                  |
    +==========================================================================*/

    int vacant = root;

    while (2 * vacant + 1 < bound)
    {
        int largerChild = 2 * vacant + 1;

        /*===================================+
        |Find the larger of the two children.|
        +===================================*/

        if ((largerChild < bound) and (GreaterThan(anArray[largerChild + 1], anArray[largerChild])))
        {
            largerChild += 1;
        }

		if (GreaterThan(key, anArray[largerChild]))
        {
            break;                                         // True; stop looping.
        }

        else
        {
            anArray[vacant] = anArray[largerChild];
            vacant = largerChild;             // False; move the larger child up.
        }
    }

    anArray[vacant] = key;
}