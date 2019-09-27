#include <stdio.h>
#include <string.h>

int compare(char *str1, char *str2)
{
    while (*str1 || *str2)
    {
        int temp = *str1++ - *str2++;
        if (temp != 0)
            return temp;
    }
    return 0;
}

int main()
{
    int len;
    char str1[] = "013ABCDEF4960910";
    char str2[] = "013";

    // len = strcspn(str1, str2);

    printf("custom %d\n", compare(str2, str1));
    printf("library %d\n", strcmp(str2, str1));

    return (0);
}