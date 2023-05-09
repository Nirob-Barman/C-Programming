#include <stdio.h>

void fun(int num)
{
    if (num == 6) // base case
    {
        return;
    }

    fun(num + 1);

    printf("%d\n", num);
}

int main()
{
    // printf("Recursive Reverse Way\n");
    fun(1);
    return 0;
}