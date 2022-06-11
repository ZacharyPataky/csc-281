/*===========================+
|Zachary Pataky              |
|kruskals.h                  |
|Created: 22 April 2020      |
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

/*==============================================================================+
|This is the header for [kruskals.h].                                           |
+-------------------------------------------------------------------------------+
|Function [kruskals] represents Kruskal's algorithm.  Kruskal's algorithm is a  |
|    greedy minimum-spanning tree algorithm which finds an edge of the least    |
|    possible weight that connects any two trees in the forest.                 |
|Parameter [numNodes] is an integer representing the number of nodes in a graph.|
|Parameter [graph] is an array of struct [Edge].                                |
|Parameter [numEdges] is an integer representing the number of edges in a graph.|
|Parameter [MST] is an array of struct [Edge].                                  |
+==============================================================================*/

void kruskals(int numNodes, edge graph[], int numEdges, edge MST[]);