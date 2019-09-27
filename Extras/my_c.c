#include <stdio.h>
#include "testheader.h"
extern int k;
extern void display2();
void ex()
{
    printf("ex: %d\n", k++);
}
// extern int g;

void main()
{
    // register int a;
    // a = 20;
    // b = 20;
    // b = 30;
    printf("Main: %d\n", k);
    display();
    display2();
}