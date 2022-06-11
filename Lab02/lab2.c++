/*==============================+
|Zachary Pataky                 |
|lab2.cpp                       |
|Created: 30 January 2020       |
|Last Modified: 04 February 2020|
+==============================*/

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

int p1Call = 0, p1Then = 0, p1Else = 0; // These are the global variables to be
                                        //     used in function [power1].

int p2Call = 0, p2Then = 0, p2Else = 0; // These are the global variables to be
                                   	//     used in function [power2].

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

int power1(int x, int y) {

    /*================================================================+
    |This is function [power1].                                       |
    |This function is the first recursive method of calculating power.|
    |The power of a number says how many times to use the number in a |
    |    multiplication.  It modifies a base value.                   |
    |Parameter [x] is an integer representing the base of the power.  |
    |Parameter [y] is an integer representing the exponent of a power.|
    +================================================================*/

    p1Call++;                        // This increments global variable [p1Call].
    
    if (y == 0) {                 // This is the base case for function [power1].
        p1Then++;                    // This increments global variable [p1Then].

        return 1;                  // If (y ==0), the value [1] will be returned.
    }
    else {
        if (y % 2 == 0) {
            return power1(x, y / 2) * power1(x, y / 2);

        /*====================================================================+
	|This recursively calls function [power1] twice and multiples together|
        |    the values those two functions will return.                      |
	|    This product is then returned.                                   |
        +====================================================================*/
        }
        else {
	    p1Else++;                // This increments global variable [p1Else].
            return x * power1(x, y / 2) * power1(x, y / 2);
	    
	    /*===============================================================+
	    |This recursively calls function [power1] and multiplies together|
	    |    the values those two functions will return with x.          |
            |    This product is then returned.                              |
	    +===============================================================*/
        }
    }
}

int power2(int x, int y) {

    /*=================================================================+
    |This is function [power2].                                        |
    |This function is the second recursive method of calculating power.|
    |The power of a number says how many times to use the number in a  |
    |    multiplication.  It modifies a base value.                    |
    |Parameter [x] is an integer representing the base of a power.     |
    |Parameter [y] is an integer representing the exponent of a power. |
    +=================================================================*/

    p2Call++;                        // This increments global variable [p2Call].

    if (y == 0) {                       // This is the base case for [function2].
	p2Then++;                    // This increments global variable [p2Then].

	return 1;                       // If (y ==0), value [1] will be returned.
    }
    else {
	int temp = power2(x, y/2); // This creates variable [temp] which holds a
			           //     case for the function [power2].

	if (y % 2 == 0) {         // This checks to see if the exponment is even.
	    return temp * temp;          // If even; [temp] * [temp] is returned.
	}
	else {
	    p2Else++;                // This increments global variable [p2Else].

	    return x * temp * temp;          // This returns [temp] * [temp] * x.
	}
    }
}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

int main() {
    
    /*=========================================================================+
    |This is the main program for CSC 281L Project 2.                          |
    |In this program, both functions [power1] and [power2] will be called      |
    |    with variables [xInput] and [yInput] offered as arguments. As these   |
    |    functions run, variables [pXCall], [pXThen], and [pXElse] will be     |
    |    counted.  These values will be split into their respective [pX] groups|
    |    and summed to determine which program is most efficient.  The most    |
    |    efficient recursive function will have a smaller sum of values.       |
    +=========================================================================*/

    int xInput = 0, yInput = 0;    // These are the values used in the functions.
			           //     Integer [xInput] is the base value.
			           //     Integer [yInput] is the exponent value.

    cout << "Please enter an [x] value: ";  // Prompts the user to input a value.
    cin >> xInput;		// [xInput] is assigned whatever the user inputs.

    cout << "Please enter a [y] value: ";   // Prompts the user to input a value.
    cin >> yInput;		// [yInput] is assigned whatever the user inputs.

    int p1Func = power1(xInput, yInput);     // Call [power1]; store to [p1Func].
    int p2Func = power2(xInput, yInput);     // Call [power2]; store to [p2Func].

    int p1Sum = p1Call + p1Then + p1Else;    // Sum [power1]'s counter variables.
    int p2Sum = p2Call + p2Then + p2Else;    // Sum [power2]'s counter variables.

    cout << "[p1Call]: " << p1Call << endl; // This prints the value of [p1Call].
    cout << "[p1Then]: " << p1Then << endl; // This prints the value of [p1Then].
    cout << "[p1Else]: " << p1Else << endl; // This prints the value of [p1Else].
    cout << "[p1Sum]: " << p1Sum << endl;    // This prints the value of [p1Sum].

    cout << "\n";                // This prints an empty line for pretty spacing.

    cout << "[p2Call]: " << p2Call << endl; // This prints the value of [p2Call].
    cout << "[p2Then]: " << p2Then << endl; // This prints the value of [p2Then].
    cout << "[p2Else]: " << p2Else << endl; // This prints the value of [p2Else].
    cout << "[p2Sum]: " << p2Sum << endl;    // This prints the value of [p2Sum].

    cout << "\n";                // This prints an empty line for pretty spacing.

    if (p1Sum < p2Sum) {
	cout << "[power1] is more efficient than [power2]." << endl;
    }
    else {
	cout << "[power2] is more efficient than [power1]." << endl;
    }
}
