#include <stdio.h>
struct Semployee
{
    int empId;
    char *name;
    int age;
};
union Uemployee {
    int empId;
    char *name;
    int age;
};
int main()
{
    struct Semployee Semp[] = {{1, "Mike", 24}, {2, "AAA", 24}, {3, "BBB", 25}, {4, "CCC", 30}};
    union Uemployee Uemp[] = {{1, "Mike", 24}, {2, "AAA", 24}, {3, "BBB", 25}, {4, "CCC", 30}};

    printf("Struct:- Id : %d, Age : %d, Name : %s\n", Semp[2].empId, 3 [Semp].age, (*(Semp + 1)).name);
    printf("Union:- Id : %d, Age : %d, Name : %s\n", Uemp[2].empId, 3 [Uemp].age, (*(Uemp + 1)).name);
    return 0;
}

//Struct:- Id : 3, Age : 30, Name : AAA
//Segmentation fault (core dumped)