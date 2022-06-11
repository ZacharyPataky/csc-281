/*===========================+
|Zachary Pataky              |
|MyRandom.h                  |
|Created: 10 February 2020   |
|Last Modified: 23 March 2021|
+===========================*/

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

/*====+
|CLASS|
+====*/

/*==========================================================================+
|This is the header for class [MyRandom].                                   |
|Class [MyRandom] contains four "constants", one variable, two constructors,|
|    and two functions.                                                     |
|The four "constants" [a, m, q, r] are integers.                            |
|Variable [seed] is an integer.                                             |
|Constructor [MyRandom] takes no parameters.                                |
|Constructor [MyRandom] takes one integer parameter [seedVal].              |
|Function [RanNum] takes no parameters and returns a double.                |
|Function [RanRange] takes two integer parameters [high, low] and returns an|
|    integer.                                                               |
    +==========================================================================*/
class MyRandom {
    private:

        /*=======+
        |VARIABLE|
        +=======*/

        /*====================================================+
        |Variables [a, m, q, r] are "constant" integers.      |
        |Variable [seed] is a distinct value influenced by the|
        |    class's constructors.                            |
        +====================================================*/
        int a, m, q, r, seed;

    public:

        /*==========+
        |CONSTRUCTOR|
        +==========*/

        /*============================================================+
        |Constructor [MyRandom] takes no parameters.                  |
        |Constructor [MyRandom] takes one integer parameter [seedVal].|
        +============================================================*/
        MyRandom();
        MyRandom(int seedVal);

        /*=======+
        |FUNCTION|
        +=======*/

        /*===============================================================+
        |Function [RanNum] takes no parameters and returns a double.     |
        |Function [RanRange] takes two integer parameters [high, low] and|
        |    returns an integer.                                         |
        +===============================================================*/
        double RanNum();
        int RanRange(int high, int low);
};
