/*=============================+
|Zachary Pataky                |
|kruskals.c++                  |
|Created: 23 April 2020        |
|Last Modified: 05 October 2020|
+=============================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "kruskals.h"
#include "partition.h"
#include "quickSortL9.h"
#include "edge.h"
#include "utility.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

void kruskals(int numNodes, edge graph[], int numEdges, edge MST[])
{
    /*==========================================================================+
    |This is the header for [kruskals.c++].                                     |
    +---------------------------------------------------------------------------+
    |Function [kruskals] represents Kruskal's algorithm.  Kruskal's algorithm is|
    |    a greedy minimum-spanning tree algorithm which finds an edge of the    |
    |    least possible weight that connects any two trees in the forest.       |
    |Parameter [numNodes] is an integer representing the number of nodes in a   |
    |    graph.                                                                 |
    |Parameter [graph] is an array of struct [Edge].                            |
    |Parameter [numEdges] is an integer representing the number of edges in a   |
    |    graph.                                                                 |
    |Parameter [MST] is an array of struct [Edge].                              |
    +==========================================================================*/

    int parentArr[numNodes];               // Create an array of size [numNodes].

    // QUICKSORT
    quickSortL9(graph, 0, numEdges - 1);

    // PARTITION
    InitializePartition(parentArr, numNodes);

    int edgeCount = 0;
    int includedCount = 0;

    while ((edgeCount < numEdges) and (includedCount <= numNodes - 1))
    {
        int parent1 = FindRoot(parentArr, graph[edgeCount].start);
        int parent2 = FindRoot(parentArr, graph[edgeCount].end);

        if (parent1 != parent2)
        {
            MST[includedCount] = graph[edgeCount];    // Append node to the tree.
            includedCount += 1;
            Union(parentArr, parent1, parent2);
        }
        
        edgeCount += 1;
    }
}
