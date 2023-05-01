#include <stdio.h>

void sum(int x,int y)
{
    int summation = x + y;
    printf("%d\n", summation);
}

int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    sum(x, y);
    return 0;
}