#include <stdio.h>

int main()
{
    int i;
    // while loop
    printf("----1 to 5 using while loop----\n");
    i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    // do while
    printf("----1 to 5 using do-while loop----\n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (i <= 5);

    return 0;
}