/*==========================+
|Zachary Pataky             |
|lab2.cpp                   |
|Created: 30 January 2020   |
|Last Modified: 11 June 2022|
+==========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===============+
|GLOBAL VARIABLES|
+===============*/

/*============================================================================+
|These global variables will be counted within their respective [pX] functions|
|to determine which recursive function is more efficient.  The most efficient |
|function will have a smaller sum of global variables [pXCall], [pxThen], and |
|[pxElse].                                                                    |
+============================================================================*/

// These are the global variables to be used in functions [power1] and [power2]
int p1Call = 0, p1Then = 0, p1Else = 0;
int p2Call = 0, p2Then = 0, p2Else = 0;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*================================================================+
|This is function [power1].                                       |
|This function is the first recursive method of calculating power.|
|The power of a number says how many times to use the number in a |
|    multiplication.  It modifies a base value.                   |
|Parameter [x] is an integer representing the base of the power.  |
|Parameter [y] is an integer representing the exponent of a power.|
+================================================================*/
int power1(int x, int y)
{
    p1Call++;
    
    // Base-case
    if (y == 0) {
        p1Then++;
        return 1;
    }
    else {
        /*====================================================================+
	    |This recursively calls function [power1] twice and multiples together|
        |    the values those two functions will return.                      |
	    |    This product is then returned.                                   |
        +====================================================================*/
        if (y % 2 == 0) {
            return power1(x, y / 2) * power1(x, y / 2);
        }
        /*===============================================================+
	    |This recursively calls function [power1] and multiplies together|
	    |    the values those two functions will return with x.          |
        |    This product is then returned.                              |
	    +===============================================================*/
        else {
	        p1Else++;
            return x * power1(x, y / 2) * power1(x, y / 2);
        }
    }
}

/*=================================================================+
|This is function [power2].                                        |
|This function is the second recursive method of calculating power.|
|The power of a number says how many times to use the number in a  |
|    multiplication.  It modifies a base value.                    |
|Parameter [x] is an integer representing the base of a power.     |
|Parameter [y] is an integer representing the exponent of a power. |
+=================================================================*/
int power2(int x, int y) {
    p2Call++;

    // Base-case
    if (y == 0) {
	    p2Then++;
	    return 1;
    }
    else {
	    int temp = power2(x, y/2); // Holds a case for the function [power2]

        if (y % 2 == 0) {
            return temp * temp;
        }
        else {
            p2Else++;
            return x * temp * temp;
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

/*=========================================================================+
|This is the main program for CSC 281L Project 2.                          |
|In this program, both functions [power1] and [power2] will be called      |
|    with variables [xInput] and [yInput] offered as arguments. As these   |
|    functions run, variables [pXCall], [pXThen], and [pXElse] will be     |
|    counted.  These values will be split into their respective [pX] groups|
|    and summed to determine which program is most efficient.  The most    |
|    efficient recursive function will have a smaller sum of values.       |
+=========================================================================*/

int main() {
    int xInput = 0;  // Base value
    int yInput = 0;  // Exponent value

    // Prompt the user for a base value
    cout << "Please enter an [x] value: ";
    cin >> xInput;

    // Prompt the user for an exponent value
    cout << "Please enter a [y] value: ";
    cin >> yInput;

    // Call the power functions and store them in their respective variables
    int p1Func = power1(xInput, yInput);
    int p2Func = power2(xInput, yInput);

    // Sum the counter variables
    int p1Sum = p1Call + p1Then + p1Else;
    int p2Sum = p2Call + p2Then + p2Else;

    // Print P1 values
    cout << "[p1Call]: " << p1Call << endl;  // Call
    cout << "[p1Then]: " << p1Then << endl;  // Then
    cout << "[p1Else]: " << p1Else << endl;  // Else
    cout << "[p1Sum]: " << p1Sum << endl;  // Sum

    cout << "\n";

    // Print P2 values
    cout << "[p2Call]: " << p2Call << endl; // Call
    cout << "[p2Then]: " << p2Then << endl; // Then
    cout << "[p2Else]: " << p2Else << endl; // Else
    cout << "[p2Sum]: " << p2Sum << endl;  // Sum

    cout << "\n";

    if (p1Sum < p2Sum) {
	    cout << "[power1] is more efficient than [power2]." << endl;
    }
    else {
	    cout << "[power2] is more efficient than [power1]." << endl;
    }
}
