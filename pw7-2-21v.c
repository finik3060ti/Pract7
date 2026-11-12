#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int cnt = 0;
    int len = 0;
    int w5 = 0;

    while ((c = getchar()) != EOF)
    {
        cnt++;
        if (isspace(c))
        {
            if (len == 5)
                w5++;
            len = 0;
        }
        else
            len++;

        if (c == '\n')
        {
            printf("Слов в 5 символов: %d\n", w5);
            printf("Всего символов: %d\n", cnt);
        }   
    }
    if (len == 5)
        w5++;

    return 0;
}