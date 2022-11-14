#include <stdio.h>
int minimum(int n, int a, int b, int c)
{
    if ((float)n / a == 2)
    {
        return 1 + minimum(n - a, a, b, c);
    }
    else if ((float)n / b == 2)
    {
        return 1 + minimum(n - b, a, b, c);
    }
    else if (n >= a)
    {
        return 1 + minimum(n - a, a, b, c);
    }
    else if (n >= b && n < a)
    {
        return 1 + minimum(n - b, a, b, c);
    }
    else if (n >= c && n < b)
    {
        return 1 + minimum(n - c, a, b, c);
    }
    else if (n == 0)
    {
        return 0;
    }
}

int main()
{
    int a, b, c, num;
    printf("Enter the set of coins in decreasing order: ");
    scanf("%d %d %d", &a, &b, &c, &num);
    printf("Enter the amount: ");
    scanf("%d", &num);
    printf("Minimum number of coins required: %d ", minimum(num, a, b, c));
    return 0;
}
