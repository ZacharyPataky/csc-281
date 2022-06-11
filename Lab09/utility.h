/*===========================+
|Zachary Pataky              |
|utility.h                   |
|Created: 13 February 2020   |
|Last Modified: 29 April 2020|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////


/*=====+
|IMPORT|
+=====*/

#include "edge.h"

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*=============================================================================+
|This is the header for [utility].                                             |
+------------------------------------------------------------------------------+
|Function [CheckList] takes two parameters [aList, listSize] and returns [True]|
|    if the list is in increasing order and [False] otherwise.                 |
|Parameter [aList] is a list.                                                  |
|Parameter [listSize] is an integer.                                           |
+------------------------------------------------------------------------------+
|Function [GreaterThan] takes two parameters [int1, int2] and returns [True] if|
|    the first argument is greater than the second argument and [False]        |
|    otherwise.                                                                |
|Parameter [int1] is an integer.                                               |
|Parameter [int2] is an integer.                                               |
+------------------------------------------------------------------------------+
|Function [Swap] takes two parameters [int1, int2] and swaps their values.     |
|Parameter [edge1] is an [edge].                                               |
|Parameter [edge2] is an [edge].                                               |
+=============================================================================*/

bool CheckList(edge aList[], int listSize);
bool GreaterThan(int int1, int int2);
void Swap(edge &edge1, edge &edge2);
