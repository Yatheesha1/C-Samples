#include <stdio.h>
int main()
{
    union values {
        int intVal;
        char chrVal[2];
        int i;
    };

    struct Svalues
    {
        int intVal;
        char chrVal[2];
        int i;
    };

    union values val = {200};
    struct Svalues Sval = {200};

    printf("Union: %d,%c,%c,%d\n", val.intVal, val.chrVal[0], val.chrVal[1], val.i);
    printf("Stuct: %d,%c,%c,%d\n", Sval.intVal, Sval.chrVal[0], Sval.chrVal[1], Sval.i);
    return 0;
}

//Union: 200,garbage,garbage,200
//Stuct: 200,,,0