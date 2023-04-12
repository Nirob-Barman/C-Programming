#include <stdio.h>

void bitwise_AND_UNARY_Operator(int num)
{
    if ((num & -num) == 1)
        printf("odd\n");
    else
        printf("even\n");
}
void bitwise_AND_Operator(int num)
{
    if (num & 1)
        printf("odd\n");
    else
        printf("even\n");
}

void division_Operator(int num)
{
    if ((num / 2) * 2 == num)
        printf("even\n");
    else
        printf("odd\n");
}

void right_shift_left_shift(int num)
{
    if ((num >> 1) << 1 == num)
        printf("even\n");
    else
        printf("odd\n");
}

void Modulo_Operator(int num)
{
    if (num % 2)
        printf("odd\n");
    else
        printf("even\n");
}

void solve(int n)
{
    Modulo_Operator(n);
    division_Operator(n);
    bitwise_AND_Operator(n);
    bitwise_AND_UNARY_Operator(n); // less efficient
    right_shift_left_shift(n);
}

int main()
{
    int n;
    scanf("%d\n", &n);
    // printf("%d\n", n);
    solve(n);
}