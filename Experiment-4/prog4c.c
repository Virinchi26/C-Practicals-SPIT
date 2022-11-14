#include <stdio.h>

int ack(int m, int n)
{
    if (m == 0)
        return n + 1;

    else if (m != 0 && n == 0)
        return ack(m - 1, 1);

    else
        return ack(m - 1, ack(m, n - 1));
}

int main()
{
    int n, m;
    printf("m,n     m=1          m=2          m=3\n");
    for (n = 1; n <= 10; n++)
    {
        if (n < 10)
            printf("n=%d         ", n);
        if (n >= 10)
            printf("n=%d       ", n);
        printf("n=%d     ", n);
        for (m = 1; m <= 3; m++)
        {
            printf("A(%d,%d)", m, n);
            printf("=%d", ack(m, n));
            printf("     ");
        }
        printf("\n");
    }
    return 0;
}