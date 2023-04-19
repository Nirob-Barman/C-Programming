#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    printf("Using Iteration\n");
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is small\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is small\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is small\n");
            break;
        }
        else
        {
            printf("B is small\n");
            break;
        }
    }

    printf("\n\nUsing library function\n");
    int value = strcmp(a, b);
    // printf("%d\n", value);
    if (value < 0)
        printf("A is small");
    else if (value == 0)
        printf("Same\n");
    else
        printf("B is small\n");
    return 0;
}