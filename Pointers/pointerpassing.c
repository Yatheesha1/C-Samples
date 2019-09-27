

#include <stdio.h>

char *fun(char **p)
{
    *p = "Hello";
    return *p;
}
int i;

int main()
{
    char *p = "Hai";
    char *r = fun(&p);
    printf("%s\n", r);
    return 0;
}
