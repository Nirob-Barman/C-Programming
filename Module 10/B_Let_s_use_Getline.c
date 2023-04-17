#include <stdio.h>

int main()
{
    char s[1000001];
    gets(s);
    // printf("%s\n", s);

    for (int i = 0; s[i] != '\\'; i++)
        printf("%c", s[i]);

    return 0;
}