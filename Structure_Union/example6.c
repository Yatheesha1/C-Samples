
#include <stdio.h>
int main()
{
    struct Sbitfield
    {
        signed int a : 3;
        unsigned int b : 13;
        unsigned int c : 1;
    };
    union Ubitfield {
        signed int a : 3;
        unsigned int b : 13;
        unsigned int c : 1;
    };

    struct Sbitfield Sbit1;
    printf("Struct:\n");
    printf("%u\n", Sbit1.c);
    struct Sbitfield Sbit2 = {2, 14, 1};
    printf("%lu\n", sizeof(Sbit2));
    printf("%u\n", Sbit2.b);
    printf("Union:\n");
    union Ubitfield Ubit1;
    printf("%u\n", Ubit1.c);
    union Ubitfield Ubit2 = {2, 14, 1};
    printf("%lu\n", sizeof(Ubit2));
    printf("%u\n", Ubit2.b);
    return 0;
}

/*Struct:
0
4
14
Union:
0
4
2*/