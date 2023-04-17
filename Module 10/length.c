#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length using For Loop : %d\n", count);

    count = 0;
    while (a[count] != '\0')
    {
        count++;
    }
    printf("Length using While Loop : %d\n", count);

    int length = strlen(a);
    printf("Length using Library Function : %d\n", length);

    return 0;
}