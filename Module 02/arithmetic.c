#include <stdio.h>

int main()
{
    int a = 3, b = 20;
    int sum, sub, mul, division, divFraction;
    float div;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    division = b / a;
    divFraction = (b * 1.0) / a;
    div = (a * 1.0) / b;
    printf("%d %d %d %d %d %f\n", sum, sub, mul, division, divFraction, div);

    int mod, modReverse;
    mod = b % a;
    modReverse = a % b;
    printf("%d %d\n", mod, modReverse);

    return 0;
}