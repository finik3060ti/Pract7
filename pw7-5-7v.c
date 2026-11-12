#include <stdio.h>

int rec(int a, int b)
{
    if (b == 0)
        return a;
    return rec(b, a % b);
}

int iter(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void)
{
    int a, b;
    printf("Введите два числа: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Ошибка\n");
        return 0;
    }

    printf("Рекурсивно: %d\n", rec(a, b));
    printf("Итеративно: %d\n", iter(a, b));

    return 0;
}