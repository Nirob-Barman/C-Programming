#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    // printf("%d\n", n);
    while (i <= n)
    {
        if (i % 5)
            printf("%d No\n", i);
        else
            printf("%d Yes\n", i);
        i = i + 1;
    }
}