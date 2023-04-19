#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    // printf("%d %d\n", n, m);
    int a[n], cnt[m + 1];
    memset(cnt, 0, sizeof cnt);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
        printf("%d\n", cnt[i]);
    return 0;
}