#include <stdio.h>
#include <math.h>
int prime(int);
int main()
{
    int n, p, i;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        p = prime(i);
        if (p == 0)
            printf("%d* ", i);
        else
            printf("%d ", i);

        if (i % 10 == 0)
            printf("\n");
    }
}
int prime(int n)
{
    int i;
    if (n == 1)
        return 1;
    else if (n > 1)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 1;
        }
    }
    return 0;
}