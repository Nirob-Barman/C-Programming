#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        // printf("%c %d %d\n", s[i], s[i], value);
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
            printf("%d %c %d\n", i + 'a', i + 'a', cnt[i]);
    }
    printf("Using the String\n");
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        if (cnt[value] != 0)
        {
            printf("%c - %d\n", value + 'a', cnt[value]);
            cnt[value] = 0;
        }
    }
    return 0;
}