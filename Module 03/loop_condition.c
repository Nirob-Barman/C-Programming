#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i = i + 1)
    {
        // printf("%d\n", i);
        if (i % 2 == 0)
            printf("%d is Even\n", i);
        else
            printf("%d is Odd\n", i);
    }
    int n;
    printf("-------Taking Input-------\n");
    scanf("%d\n", &n);
    for (i = 1; i <= n; i = i + 1)
    {
        // printf("%d\n", i);
        if (i % 2 == 0)
            printf("%d is Even\n", i);
        else
            printf("%d is Odd\n", i);
    }
    return 0;
}