#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("I will eat Burger.\n");
    }
    else if (tk >= 50)
    {
        printf("I will eat Fuchka");
    }
    else
    {
        printf("I'd be starving all day.\n");
    }
}
/*
input.txt
115
56
40
*/