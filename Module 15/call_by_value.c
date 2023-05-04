#include <stdio.h>

void fun(int x)
{
    printf("Address of x in fun function - %p\n", &x);
    x = 200;
    printf("Value of x in fun function - %d\n", x);
}

int main()
{
    int x = 10;
    printf("Address of x in main function - %p\n", &x);
    fun(x);
    printf("Value of x in main function - %d\n", x);
    return 0;
}