#include <stdio.h>
#include <string.h>

void fun(char a[])
{
    int sz = sizeof(a) / sizeof(char);
    printf("size in function = %d\n", sz);
    printf("Length = %d\n", strlen(a));
}

int main()
{
    char a[20] = "Wonderful";
    int sz = sizeof(a) / sizeof(char);
    printf("Size in main function = %d\n", sz);
    fun(a);

    return 0;
}