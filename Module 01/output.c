#include <stdio.h>

int main()
{
    int rahim, karim;
    char c;
    float f;
    scanf("%d %d %f %c", &rahim, &karim, &f, &c);
    printf("%d %d %f %c\n", rahim, karim, f, c);

    // ways to take percentage as input
    int a, b;
    char p;
    scanf("%d %c %d %c", &a, &p, &b, &p);
    printf("%d%% %d%%\n", a, b);

    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%\n", a, b);
    return 0;
}