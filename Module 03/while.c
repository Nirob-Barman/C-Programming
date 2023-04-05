#include <stdio.h>

int main()
{
    // for loop
    int i, sum = 0;
    printf("----1 to 5 using for loop----\n");
    for (i = 1; i <= 5; i = i + 1)
    {
        printf("%d\n", i);
    }
    // while loop
    printf("----1 to 5 using while loop----\n");
    i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}