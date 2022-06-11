/*===========================+
|Zachary Pataky              |
|MyRandom.c++                |
|Created: 10 February 2020   |
|Last Modified: 23 March 2021|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=====+
|IMPORT|
+=====*/

#include "MyRandom.h"
#include <limits.h>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*==========+
|CONSTRUCTOR|
+==========*/

/*===============================================================+
|This constructor has no parameters.                             |
|This constructor assigns values to variables [a, m, q, r, seed].|
+===============================================================*/
MyRandom::MyRandom() {
    a = 16807;
    m = 2147483647;
    q = m / a;
    r = m % a;

    seed = INT_MAX / 2;
}

/*===============================================================+
|This constructor has one parameter.                             |
|Parameter [seedVal] is an integer.                              |
|This constructor assigns values to variables [a, m, q, r, seed].|
|Variable [seed] is assigned the value of [seedVal].             |
+===============================================================*/
MyRandom::MyRandom(int seedVal) {
    a = 16807;
    m = 2147483647;
    q = m / a;
    r = m % a;

    seed = seedVal;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*=======+
|FUNCTION|
+=======*/

/*====================================================+
|Method [RanNum] is from class [MyRandom].            |
|This method takes no parameters and returns a double.|
+====================================================*/
double MyRandom::RanNum() {
    /*=======+
    |VARIABLE|
    +=======*/

    int high = seed / q;
    int low = seed % q;
    int test = a * (low - (r * high));

    if (test > 0) { seed = test; }
    else { seed = test + m; }

    // Seed must be casted to double to return a double.
    return double(seed) / m;
}

/*===============================================================+
|Method [RanRange] from class [MyRandom].                        |
|This method takes two integer parameters [high, low] and returns|
|    an integer.                                                 |
+===============================================================*/
int MyRandom::RanRange(int low, int high) {
    return int(((high - low) * RanNum() + low));
}
