#include <stdio.h>

double ost(double a, double b)
{
    double bg;
    double sm;
    long long q;

    if (a > b)
    {
        bg = a;
        sm = b;
    }
    else
    {
        bg = b;
        sm = a;
    }

    q = bg / sm;
    return bg - q * sm;
}

int main(void)
{
    double a, b;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        if (a == 0 || b == 0)
            printf("Деление на ноль\n");
        else
            printf("%.4f\n", ost(a, b));
    }

    return 0;
}