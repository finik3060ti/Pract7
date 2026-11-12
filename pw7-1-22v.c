#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == 'a')
            c = 'o';
        putchar(c);
    }

    return 0;
}