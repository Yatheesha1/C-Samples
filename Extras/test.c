#include <stdio.h>

int k = 30;
static int g = 10;
extern void ex();
void display2()
{
    printf("Test: %d\n", k);
    ex();
}