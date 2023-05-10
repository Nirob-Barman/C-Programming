#include <stdio.h>

void Digits(int n)
{
    if (n == 0)
    {
        return;
    }
    int num = n % 10;
    Digits(n / 10);
    printf("%d ", num);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        Digits(n);
        if (n == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}