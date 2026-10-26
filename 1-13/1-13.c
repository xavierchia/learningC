#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state, n;
    n = 0;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                printf("%d ", n);
            }
            if (c == '\n')
            {
                printf("\n");
            }
            n = 0;
            state = OUT;
        }
        else
        {
            state = IN;
            ++n;
        }
    }
}