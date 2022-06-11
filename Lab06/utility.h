/*==============================+
|Zachary Pataky                 |
|utility.h                      |
|Created: 13 February 2020      |
|Last Modified: 19 February 2020|
+==============================*/

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
+=============================================================================*/

bool CheckList(int aList[], int listSize);
bool GreaterThan(int int1, int int2);
