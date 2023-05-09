#include <stdio.h>

void fun(int num)
{
    if (num == 6) // base case
    {
        return;
    }

    printf("%d\n", num);

    // if (num == 5) // base case
    // {
    //     return;
    // }

    fun(num + 1);
}

int main()
{
    // printf("Recursive Way\n");
    fun(1);
    return 0;
}