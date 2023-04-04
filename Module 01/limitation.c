#include <stdio.h>

int main()
{
    // integer value limitations
    printf("Integer Limitation Checking\n");

    int a = 1000000000; // upto 10^9 or (9+1=10 digits) acceptable
    // (-10^9 to +10^9)
    printf("%d\n", a);
    a = 10000000000; // 10^10
    printf("%d\n", a);
    a = 1000000001; // 10^9 + 1
    printf("%d\n", a);
    a = 1000000010; // 10^9 + 10
    printf("%d\n", a);
    a = 1000000500; // 10^9 + 500
    printf("%d\n", a);
    a = 1000005000; // 10^9 + 5000
    printf("%d\n", a);
    a = 1000050000; // 10^9 + 50000
    printf("%d\n", a);
    a = 1000500000; // 10^9 + 500000
    printf("%d\n", a);
    a = 1005000000; // 10^9 + 5000000
    printf("%d\n", a);
    a = 1050000000; // 10^9 + 50000000
    printf("%d\n", a);
    a = 1500000000; // 10^9 + 500000000
    printf("%d\n", a);
    a = 1900000000; // 10^9 + 900000000
    printf("%d\n", a);
    a = 1999900000; // 10^9 + 999900000
    printf("%d\n", a);
    a = 1999999900; // 10^9 + 999999900
    printf("%d\n", a);
    a = 1999999999; // 10^9 + 999999999
    printf("%d\n", a);
    // next number
    a = 10000000000; // 10^10
    printf("%d\n", a);

    printf("Long Long Integer Limitation Checking\n");
    // 8byte = 64 bit = 2
    // (-10^18 to +10^18)
    long long int b = 1000000000000000000; // upto 10^18 or (18+1=19 digits) acceptable
    printf("%lld\n", b);

    b = 10000000000000000000; // 10^19
    printf("%lld\n", b);

    b = 1000000000000000009; // 10^18+9
    printf("%lld\n", b);
    b = 1999999999999999999; // 10^18+9999999999999999999
    printf("%lld\n", b);

    // next number
    b = 10000000000000000000; // 10^19
    printf("%lld\n", b);

    printf("Float Limitation Checking\n");
    float f = 2005.5567894445;
    printf("%f\n", f);

    double d = 2005.5567894445;
    printf("%lf\n", d);

    d = 2.123456789123456;
    printf("%lf\n%0.15lf\n", d, d);
    d = 12345.123456789123456;
    printf("%lf\n%0.15lf\n", d, d);
}