#include <stdio.h>
#include <string.h>

#define swapnibble(a) ((a % 16) * 16 + (a / 16))

struct st
{
    int a;
    union un {
        int b;
        float c;
    } u;
} s;

struct emp1
{
    char ch;       //1-------------->8
    long l1;       //8-------------->16
    char chr1[26]; //26------------->48
    double d3;     //8-------------->64
    long double a; //16------------->80
    char chr2[14]; //14------------->94
    char ch3;      //1-------------->96
    long l2[5];    //40------------->136
    char ch2;      //1-------------->140
    float f2;      //4-------------->144
    double d2;     //8-------------->152
    char chr4[37]; //37------------->192
    float f1;      //4-------------->208//final size should be multiple of highest size of data type
};
struct emp2
{
    char ch;       //1-------------->8
    char chr1[26]; //26------------->48
    char chr2[14]; //14------------->94
    char ch3;      //1-------------->96
    char chr4[37]; //37------------->192
    char ch2;      //1-------------->140
    float f2;      //4-------------->144
    float f1;      //4-------------->208//final size should be multiple of highest size of data type
    long l2[5];    //40------------->136
    long l1;       //8-------------->16
    double d3;     //8-------------->64
    double d2;     //8-------------->152
    long double a; //16------------->80
};
void main()
{
    struct emp1 e;
    printf("Size of char:%d\n", (int)sizeof(char));
    printf("Size of int:%d\n", (int)sizeof(int));
    printf("Size of long:%d\n", (int)sizeof(long));
    printf("Size of long double:%d\n", (int)sizeof(long double));
    printf("Size of float:%d\n", (int)sizeof(float));
    printf("Size of double:%d\n", (int)sizeof(double));
    printf("Size of char[]:%d\n", (int)sizeof(e.chr2));
    printf("Size emp1:%d\n", (int)sizeof(struct emp1));
    printf("Size emp2:%d\n", (int)sizeof(struct emp2));
    printf("Size st:%d\n", (int)sizeof(struct st));
    int a = 0x64;
    printf("%X\n", swapnibble(a));
}

// int swap(int a)
// {
//     int n = a % 16;
//     a = a / 16;
//     n = n / 16;
//     return n;
// }