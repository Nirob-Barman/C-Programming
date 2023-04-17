#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    gets(a);
    printf("%s\n", a);

    char b[18];
    fgets(b, 18, stdin);
    printf("%s\n", b);

    char c[13];
    printf("Size of C : %d\n", sizeof(c) / sizeof(char));
    getchar();
    fgets(c, 10, stdin);
    printf("%s\n", c);

    return 0;
}