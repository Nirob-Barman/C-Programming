#include <stdio.h>

int main()
{
    char a[5];
    // printf("%d\n", sizeof(char));
    // printf("%d\n", sizeof(a) / sizeof(char));
    for (int i = 0; i < 5; i++)
        scanf("%c", &a[i]);
    for (int i = 0; i < 5; i++)
        printf("%c\n", a[i]);
    return 0;
}