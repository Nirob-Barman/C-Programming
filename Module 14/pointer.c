#include <stdio.h>

int main()
{
    int x = 20;
    printf("%p\n", &x);

    int *p = &x;
    printf("%p\n", p);

    // dereference
    printf("Integer version of address = %d\n", p);
    printf("%d\n", *p);

    p = 500;
    printf("No change in x = %d\n", x);

    int y = 10;
    int *py = &y;
    *py = 500;
    printf("Change in y using dereference = %d\n", y);

    return 0;
}