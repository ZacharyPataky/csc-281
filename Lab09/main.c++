/*=============================+
|Zachary Pataky                |
|main.c++                      |
|Created: 22 April 2020        |
|Last Modified: 12 October 2020|
+=============================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "edge.h"
#include "kruskals.h"
#include "partition.h"
#include "pivotListL9.h"
#include "quickSortL9.h"
#include "utility.h"

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*==============+
|GLOBAL VARIABLE|
+==============*/

int comparisonCount;
int swapCount;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

int main()
{
    /*======================================================================+
    |This is the main program for Lab #09.                                  |
    +-----------------------------------------------------------------------+
    |This program asks a user for a file name, opens that file, and performs|
    |   Kruskal's Minimum-Spanning Tree Algorithm on the information        |
    |    provided in that file.  Once that returns, the full MST will be    |
    |    written to an output file that is the original file's name with    |
    |    [.mst] appended to it.  This totals the weights in the MST and     |
    |    prints that to the screen.                                         |
    +======================================================================*/

    cout.imbue(locale(""));                      // Nicely formats large numbers.

/////////////////////////////////////////////////////////////////////////////////

    /*====+
    |INPUT| >>
    +====*/

    string fileName;
    int numNodes;
    int numEdges;

    cout << "Please enter a file name: ";
    cin >> fileName;

    ifstream myFile;
    myFile.open(fileName.c_str());

    myFile >> numNodes;
    myFile >> numEdges;

    edge graph[numEdges];
    edge MST[numNodes];	

    for (int count = 0; count < numEdges; count++)
    {
    	myFile >> graph[count].start >> graph[count].end >> graph[count].weight;
	graph[count].start -= 1;
	graph[count].end -= 1;
    }

    myFile.close();

/////////////////////////////////////////////////////////////////////////////////

    kruskals(numNodes, graph, numEdges, MST);                  // Calls Kruskals.

/////////////////////////////////////////////////////////////////////////////////

    /*=====+
    |OUTPUT| <<
    +=====*/

    ofstream myFile2;
    fileName += ".mst";
    myFile2.open(fileName.c_str());

    int totWeight = 0;

    for (int count = 0; count < numNodes - 1; count++)
    {
	myFile2 << MST[count].start + 1 << " -> " << MST[count].end + 1 << endl;
	totWeight += MST[count].weight;
    }

    myFile2.close();

/////////////////////////////////////////////////////////////////////////////////

    cout << "The total weight of the MST is: " << totWeight << endl;
}
