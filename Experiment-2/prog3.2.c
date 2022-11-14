#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum, k, sum1 = 0, sum2 = 0, c, temp, a = 1, r, s;
    printf("Enter a number\n");
    scanf("%d", &num);
    a = num * num;

    for (int i = 0; a > 0; i++)
    {
        a = a / 10;
        a = num * num;
    }

    do
    {
        temp = temp / 10;
    } while (temp > 0);
    {
        for (int i = 0; i < num; i++)
        {
            r = s % 10;
            s = s / 10;
            sum1 = sum1 + r * a;
            a *= 10;
        }
        while (s > 0)
        {
            r = s % 10;
            s = s / 10;
            sum2 = sum2 + r * a;
            a *= 10;
            sum = sum1 + sum2;
        }
    }
    if (sum = k)
    {
        printf(" %d is a Kaprekar number\n");
    }
    else
    {
        printf(" %d is not a Kaprekar number\n");
    }
    return 0;
}
