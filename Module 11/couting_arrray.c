#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            zero++;
        if (a[i] == 1)
            one++;
    }
    printf(" %d Zeros and %d Ones =\n", zero, one);

    printf("Counting Array\n");
    int count[7] = {0};
    for (int i = 0; i < 7; i++)
    {
        // printf("%d\n", i);
        int value = a[i];
        count[value]++;
    }

    for (int i = 0; i < n; i++)
        printf("%d - %d\n", i, count[i]);

    return 0;
}