#include <stdio.h>

int main()
{
    double x = 5.26;
    double *ptr = &x;
    printf("Value of x = %0.3lf\n", x);
    printf("Value of x = %0.3lf\n", *ptr);
    printf("Size of ptr = %d\n\n\n", sizeof(ptr));

    *ptr = 10.20;
    printf("Value of x = %0.3lf\n", x);
    printf("Value of x = %0.3lf\n\n", *ptr);

    double *ptr2 = ptr;
    *ptr2 = 100.50;
    printf("Value of x = %0.3lf\n", x);
    printf("Value of x = %0.3lf\n", *ptr);
    printf("Value of x = %0.3lf\n", *ptr2);

    return 0;
}