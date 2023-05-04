#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("0th index address - %p\n", &a[0]);
    printf("0th index address - %p\n\n", &a);

    printf("Value of 0th index = %d\n", a[0]);
    printf("Value of 0th index = %d\n\n", *a);

    printf("Value of 1st index = %d\n", a[1]);
    printf("Value of 1st index = %d\n", *(a + 1));

    printf("%d %d\n", a[2], 2 [a]);
    printf("%d %d\n", *(a + 2), *(2 + a));

    printf("%d\n", *(a + 3));
    printf("%d\n", *(a + 4));

    return 0;
}