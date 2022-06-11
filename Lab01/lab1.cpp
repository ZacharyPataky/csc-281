/*=========================+
|Zachary Pataky            |
|CSC_281_Lab_1             |
|Created: 26 January 2020  |
|Last Modified: 12 May 2021|
+=========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include <stdio.h>
#include <iostream>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

int func(int intArr[], int sizeArr, int avgNum) {

    /*==========================================================================+
    |This function analyzes an array.  It returns [-1] if there are more numbers|
    |    below the average, [1] if there are more numbers above the average, and|
    |    [0] if there are the same number of values above and below the average.|
    |Parameter [intArr] is an array of integers.                                |
    |Parameter [sizeArr] is the size of the array as an integer.                |
    |Parameter [avgNum] is average of the numbers in the array.                 |
    +==========================================================================*/

    int above = 0; 				// Counter for values above avgNum
    int below = 0; 				// Counter for values below avgNum

    for (int c = 0; c <  sizeArr; c++) {
        if (intArr[c] > avgNum) {     // Comparing current index with the average
            above++;                // The current index is greater than average;
        }                           //     therefore, [above] increments
        else if (intArr[c] < avgNum) {        // The current index is lesser than
            below++;                          //     average; therefore, [below]
        }                                     //     increments
        else {
            continue;
        }
    }

    if (above > below) {                      // Returns [1] as [above] > [below]
        return 1;
    }
    else if (above < below) {                // Returns [-1] as [above] < [below]
        return -1;  
    }
    else {                                   // Returns [0] as [above] == [below]
        return 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*===========+
|MAIN PROGRAM|
+===========*/

int main() {

    /*========+
    |VARIABLES|  		      	    // Format: TYPE_NAME_VALUE_SEMI-COLON
    +========*/

    int intArr[5] = {5, 17, 9, -42, 66};          // This is an array of integers
    int size = 5;               	    // This represents the size of intArr
    
/////////////////////////////////////////////////////////////////////////////////

    int sum = 0;                     
    for (int c = 0; c < size; c++) { 	    // This calcuates the sum of [intArr]
        sum += intArr[c];                   //     and divides it by size to get
    }                                       //     the integer value [11]
                                    
//////////////////////////////////////////////////////////////////////////////////

    int avg = sum / size;        // This is the average of the values in [intArr]
    
    /*========+
    |MAIN CODE|
    +========*/

    int value = func(intArr, size, avg);
    cout << "The value of [value] is " << value << endl;  
}
