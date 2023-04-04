#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("I will go Cox's Bazar.\n");
        if (tk >= 10000)
        {
            printf("I will go Saint Martin\n");
        }
        else
        {
            printf("Returning home is my next step.\n");
        }
    }
    else
    {
        printf("I'm not going anywhere.\n");
    }
}
/*
input.txt
12000
7000
3000
*/