#include <stdio.h>

int main()
{
    int i;
    printf("1 to 5\n");
    for (i = 1; i <= 5; i = i + 1)
    {
        printf("%d\n", i);
    }
    printf("2 to 20\n");
    for (i = 2; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    printf("1 to 20 odd number\n");
    for (i = 1; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    printf("10 to 1\n");
    for (i = 10; i >= 1; i = i - 1)
    {
        printf("%d\n", i);
    }
    return 0;
}