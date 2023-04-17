#include <stdio.h>

int main()
{
    // char a[5] = {'n', 'i', 'r', 'o', 'b'}; // no guarantee    char a[5] = "nirob";

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }
    // printf("%s\n", a);
    // char b[6] = "nirob\0";
    char b[6] = "nirob";
    printf("%s\n", b);

    char c[] = "nirob\0";
    printf("%s\nSize of C = %d\n", c, sizeof(c) / sizeof(char));

    char d[] = "nirob";
    printf("%s\nSize of D = %d\n", d, sizeof(d) / sizeof(char));

    return 0;
}