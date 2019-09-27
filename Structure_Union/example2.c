#include <stdio.h>
int main()
{
    union Uvalues {
        int intVal;
        char chrVal[2];
    };

    struct Svalues
    {
        int intVal;
        char chrVal[2];
    };

    union Uvalues val;
    struct Svalues Sval;
    val.chrVal[0] = 'A';
    val.chrVal[1] = 'B';

    printf("union: %c,%c,%d\n", val.chrVal[0], val.chrVal[1], val.intVal);

    Sval.chrVal[0] = 'A';
    Sval.chrVal[1] = 'B';

    printf("Struct: %c,%c,%d\n", Sval.chrVal[0], Sval.chrVal[1], Sval.intVal);
    return 0;
}

//union: A,B,16961->01000010(A) 01000001(B)
//Struct: A,B,1933154096