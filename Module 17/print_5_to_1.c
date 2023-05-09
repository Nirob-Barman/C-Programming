#include <stdio.h>

void fun(int num)
{
    if (num == 0) // base case
        return;
    printf("%d\n", num);

    // if (num == 1) // base case
    //     return;

    fun(num - 1);
}

int main()
{
    printf("Recursive way \n");
    fun(5);
    return 0;
}