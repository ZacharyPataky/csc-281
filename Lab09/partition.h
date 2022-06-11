/*=============================+
|Zachary Pataky                |
|partition.h                   |
|Created: 22 April 2020        |
|Last Modified: 11 October 2020|
+=============================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*=============================================================================+
|This is the header for [partition.h].                                         |
+------------------------------------------------------------------------------+
|Function [InitializePartition] sets each location of [parentArr] to [-1] to   |
|    indicate that each value is in its own partition and each partition has a |
|    size of [1].                                                              |
|Parameter [parentArr] is the array of integers that is implemented upon.      |
|Parameter [numElements] is an integer representing the number of elements.    |
+------------------------------------------------------------------------------+
|Function [Union] is responsible for combining two partitions into one.  It    |
|    begins by calculating the number of elements that will be in the resulting|
|    combined partition.  It then adds the smaller partition to the larger one.|
|Parameter [parentArr] is the array of integers that is implepented upon.      |
|Parameter [i] is the partition to join with partition [j].                    |
|Parameter [j] is the partition to join with partition [i].                    |
+------------------------------------------------------------------------------+
|Function [FindRoot] begins at [parentArr[s]], which has the location of the   |
|    parent of the element [s].  If this value is negative, it means that [s]  |
|    is the root of the partition, so the result of [s] is returned.  If,      |
|	 however, [s] is not a root, we update [result] to be the parent of [s] and|
|	 check to see if that is the root of the partition.  We continue to work up|
|	 this partition until we reach the root.                                   |
|Parameter [parentArr] is the array of integers that is implemented upon.      |
|Parameter [a] is the element whose partition root we want.                    |
+=============================================================================*/

void InitializePartition(int parentArr[], int numElements);
void Union(int parentArr[], int i, int j);
int FindRoot(int parentArr[], int s);
