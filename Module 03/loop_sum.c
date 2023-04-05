#include <stdio.h>

int main()
{
    int i, sum = 0;
    for (i = 1; i <= 5; i = i + 1)
    {
        sum += i;
        // printf("%d\n", i);
    }
    printf("Sum is : %d\n", sum);
    int n;
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i = i + 1)
    {
        sum += i;
        // printf("%d\n", i);
    }
    printf("Sum is : %d\n", sum);
    long long int formulaSum = n * (n + 1) / 2;
    printf("Sum Value Using formula: %lld\n", formulaSum);
    return 0;
}