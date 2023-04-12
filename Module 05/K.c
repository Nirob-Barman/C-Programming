#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min,temp;
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    min = a;
    max = c;
    printf("%d %d\n", min, max);
    return 0;
}