#include <stdio.h>
#include <stdbool.h>
#include <string.h>
static int Z = 0;

int *pointer_to_Z(int x)
{ /* function returning integer pointer, not pointer to function */
    return &Z;
}

int get_Z(int x)
{
    return Z;
}
bool compare(const void *data1, const void *data2)
{
    return (*(char *)data1 == *(char *)data2);
}

int search(void *arr, int len, int size, void *ele, bool compare(const void *c1, const void *c2))
{
    char *ch = (char *)arr;
    for (int i = 0; i < len; i++)
    {
        if (compare(ch + i * size, ele))
            return i;
    }
    return -1;
}
void main()
{
    // int (*fun)(int, int) = &compare;
    // int dat = (*fun)(1, 2);
    int arr[] = {2, 5, 7, 90, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    char ch1[] = "Hello", ch = 'o';
    printf("Index: %d\n", search(arr, n, sizeof(int), &x, compare));
    printf("Index: %d\n", search(ch1, strlen(ch1), sizeof(char), &ch, compare));
}