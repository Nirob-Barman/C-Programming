#include <stdio.h>

// global
int m = 500;

void fun(void)
{
    // printf("%d\n", s);
    int x = 45;
    printf("address of x is %p\n", &x);
    printf("Global m in fun function= %d\n", m);
}

int main()
{
    printf("Global m in main function= %d\n", m);
    int s = 100;
    // printf("%d\n", x);
    printf("address of s is %p\n", &s);
    fun();
    return 0;
}