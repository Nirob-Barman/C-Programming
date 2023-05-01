#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf", &x);
    int ans = floor(x);
    printf("Floor = %d\n", ans);

    ans = ceil(x);
    printf("Ceil = %d\n", ans);

    ans = round(x);
    printf("Round = %d\n", ans);

    int n;
    scanf("%d", &n);
    double answer = sqrt(n);
    printf("Square Root= %lf\n", answer);
    printf("Square Root = %0.lf\n", answer);

    double num;
    scanf("%lf", &num);
    answer = sqrt(num);
    printf("\n\nSquare Root = %lf\n", answer);
    printf("Square Root = %0.2lf\n", answer);

    int a, b;
    scanf("%d %d", &a, &b);
    int result = pow(a, b);
    printf("\nPower Value = %d\n", result);

    double base, power;
    scanf("%lf %lf", &base, &power);
    double res = pow(base, power);
    printf("\nPower Value of %0.2lf and %0.2lf is = %0.2lf\n", base, power, res);

    int p, q;
    scanf("%d %d", &p, &q);
    int r = pow(p * 1.0, q * 1.0);
    printf("%d\n", r);

    int i;
    scanf("%d", &i);
    int absolute = abs(i);
    printf("Absolute value %d\n", absolute);
    return 0;
}