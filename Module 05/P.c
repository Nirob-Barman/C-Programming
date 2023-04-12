#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n /= 1000;
    if (n % 2)
        printf("ODD\n");

    else
        printf("EVEN\n");
    return 0;
}