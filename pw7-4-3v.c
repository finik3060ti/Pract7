#include <stdio.h>

void ex(int *a, int *b)
{
    *a = *a - 5;
    *b = *b - 5;
}

int main(void)
{
    int x = 76;
    int y = 24;

    printf("До: x = %d, y = %d\n", x, y);
    ex(&x, &y);
    printf("После: x = %d, y = %d\n", x, y);

    return 0;
}