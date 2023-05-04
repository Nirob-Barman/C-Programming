#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    printf("Address of x - %p\n", &x);
    printf("Value of ptr - %p\n", ptr);
    printf("Address of ptr - %p\n", &ptr);
    printf("Size of ptr - %d\n\n\n", sizeof(ptr));

    x = 200;
    printf("Value of x - %d\n", x);
    printf("Value of x - %d\n", *ptr);
    return 0;
}