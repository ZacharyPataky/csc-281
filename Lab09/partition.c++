/*===========================+
|Zachary Pataky              |
|partition.c++               |
|Created: 22 April 2020      |
|Last Modified: 29 April 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "partition.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void InitializePartition(int parentArr[], int numElements)
{
    /*=========================================================================+
    |This is function [InitializePartition.c++].                               |
    +--------------------------------------------------------------------------+
    |Function [InitializePartition] setst each location of [parentArr] to [-1] |
    |    to indicate that each value is in its own partition and each partition|
    |    has a size of [1].                                                    |
    +--------------------------------------------------------------------------+
    |Parameter [parentArr] is the array of integers that is implemented upon.  |
    |Parameter [numElements] is an integer representing the number of elements.|
    +=========================================================================*/

    for(int count = 0; count < numElements; count++)
    {
        parentArr[count] = -1;
    }
}

/////////////////////////////////////////////////////////////////////////////////

void Union(int parentArr[], int i, int j)
{
    /*=======================================================================+
    |This is function [Union].                                               |
    +------------------------------------------------------------------------+
    |Function [Union] is responsible for combining two partitions into one.  |
    |    It begins by calculating the number of elements that will be in the |
    |    resulting combined partition.  It then adds the smaller partition to|
    |    the larger one.                                                     |
    +------------------------------------------------------------------------+
    |Parameter [parentArr] is the array of integers that is implemented upon.|
    |Parameter [i] is the partition to join with partition [j].              |
    |Parameter [j] is the partition to join with partition [i].              |
    +=======================================================================*/

    int totalElements = parentArr[i] + parentArr[j];

    if (parentArr[i] >= parentArr[j])
    {
        parentArr[i] = j;
        parentArr[j] = totalElements;
    }

    else
    {
        parentArr[j] = i;
        parentArr[i] = totalElements;
    }
}

/////////////////////////////////////////////////////////////////////////////////

int FindRoot(int parentArr[], int s)
{
    /*=======================================================================+
    |This is function [FindRoot].                                            |
    +------------------------------------------------------------------------+
    |Function [FindRoot] begins at [parentArr[s]], which has the location of |
    |    the parent of the element [s].  If this value is negative, it means |
    |    that [s] is the root of the partition, so the result of [s] is      |
    |	 returned.  If, however, [s] is not a root, we update [result] to be |
    |	 the parent of [s] and check to see if that is the root of the       |
    |	 partition.  We continue to work up this partition until we reach the|
    |	 root.                                                               |
    +------------------------------------------------------------------------+
    |Parameter [parentArr] is the array of integers that is implemented upon.|
    |Parameter [s] is the element whose partition root we want.              |    
    +=======================================================================*/

    int result = s;

    while (parentArr[result] >= 0)
    {
        result = parentArr[result];
    }

    return result;
}
