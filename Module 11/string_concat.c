#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);
    printf("Without Using library function\n");
    int k = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }

    scanf("%s %s", a, b);
    printf("%s %s\n\n", a, b);

    printf("Using library function\n");
    strcat(a, b);
    printf("%s %s\n", a, b);
    return 0;
}