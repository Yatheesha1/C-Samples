#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
} std;
char *fun(struct student *tempStd)
{
    strcpy(tempStd->name, "Thomas");
    return tempStd->name;
}

int main()
{
    strcpy(std.name, "Mike ");
    printf("%s", std.name);
    printf("%s%s\n", std.name, fun(&std));
    return 0;
}

//Mike ThomasThomas     -->(right to left)