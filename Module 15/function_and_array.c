#include <stdio.h>

void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sz = sizeof(a) / sizeof(int);
    printf("%d\n\n\n", sz);
    fun(a, sz);
    return 0;
}