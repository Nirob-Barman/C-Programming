#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main()
{
    int summation = sum();
    printf("%d\n", summation);
    return 0;
}