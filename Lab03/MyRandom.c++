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

MyRandom::MyRandom()
{
    /*===============================================================+
    |This constructor has no parameters.                             |
    |This constructor assigns values to variables [a, m, q, r, seed].|
    +===============================================================*/

    a = 16807;
    m = 2147483647;
    q = m / a;
    r = m % a;

    seed = INT_MAX / 2;
}

MyRandom::MyRandom(int seedVal)
{
    /*===============================================================+
    |This constructor has one parameter.                             |
    |Parameter [seedVal] is an integer.                              |
    |This constructor assigns values to variables [a, m, q, r, seed].|
    |Variable [seed] is assigned the value of [seedVal].             |
    +===============================================================*/

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

double MyRandom::RanNum()
{
    /*====================================================+
    |Method [RanNum] is from class [MyRandom].            |
    |This method takes no parameters and returns a double.|
    +====================================================*/

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

int MyRandom::RanRange(int low, int high)
{
    /*===============================================================+
    |Method [RanRange] from class [MyRandom].                        |
    |This method takes two integer parameters [high, low] and returns|
    |    an integer.                                                 |
    +===============================================================*/

    return int(((high - low) * RanNum() + low));
}
