#include <stdio.h>

int main()
{
    char s[1000001];
    scanf("%s", s);
    // printf("%s\n", s);

    int sum = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        // printf("%c", s[i]);
        sum += s[i] - '0';
        i++;
    }
    printf("%d\n", sum);

    return 0;
}