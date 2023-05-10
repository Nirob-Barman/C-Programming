#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", a);
    int l = strlen(a);
    int palindrome = 1;
    for (int i = 0; i < l; i++)
    {
        if (a[i] != a[l - i - 1])
            palindrome = 0;
    }
    if (palindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}