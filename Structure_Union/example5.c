#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Stag
    {
        char str[10];
        int a;
    } Shar;
    typedef union Utag {
        char str[10];
        int a;
    } Uhar;

    //typedef struct tag har;

    Shar sh1, sh2 = {"IHelp", 10};
    sh1 = sh2;
    sh1.str[1] = 'h';
    printf("Struct: %s,%d\n", sh1.str, sh1.a);

    Uhar uh1, uh2;
    uh2.a = 10;
    strcpy(uh2.str, "IHelp");
    uh1 = uh2;
    uh1.str[1] = 'h';
    printf("Union: %s,%d\n", uh1.str, uh1.a);
    return 0;
}

//Struct: Ihelp,10
//Union: Ihelp,1818585161