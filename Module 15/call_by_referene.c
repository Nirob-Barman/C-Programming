#include <stdio.h>

void fun(int *x)
{
    printf("Address of x in fun function - %p\n", x);
    printf("Address of x of main function in function function - %d\n", *x);
    *x = 200;
}

int main()
{
    int x = 100;
    printf("Address of x in main function - %p\n", &x);
    fun(&x);
    printf("Value of x in main function changed from fun function - %d\n", x);
    return 0;
}