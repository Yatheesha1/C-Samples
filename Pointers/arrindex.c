#include <stdio.h>

int main()
{
    int arr[5] = {11, 22, 33, 44, 55};
    printf("%d %d %d %d %d %d %d\n", arr, *arr, arr + 1, *arr + 1, *(arr + 1), &arr, **&arr);

    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("%u, %u, %u, %u\n", a[0] + 1, *(a[0] + 1), *a, *(*(a + 0) + 1));

    printf("%c\n", 7 ["IndiaBIX"]);
    return 0;
}
//833025984 11 833025988 12 22 833025984 11
//833026020, 2, 833026016, 2
//x