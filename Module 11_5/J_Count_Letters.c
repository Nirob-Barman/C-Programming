#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000001];
    scanf("%s", s);
    // printf("%s\n", s);

    int cnt[26] = {0};
    for (int i = 0; s[i]; i++)
    {
        int val = s[i] - 'a';
        // printf("%d\n", val);
        cnt[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
            printf("%c : %d\n", i + 'a', cnt[i]);
    }
    return 0;
}