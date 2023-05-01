#include <stdio.h>

// return_type name(parameter)
// {
//     code
//     return what?
// }

// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }

int sum(int x, int y);

int main()
{
    int summation = sum(10, 20);
    printf("%d\n", summation);
    printf("%d\n", sum(100, 200));
    return 0;
}

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}