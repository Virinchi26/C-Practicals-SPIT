#include <stdio.h>

int main()
{
    int a, b, i,lcm, gcd;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
    }
    else
    {
        for (int i = 1; i < b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
    }
    printf("The GCD of two numbers is %d.\n", gcd);
    lcm = (a * b) / gcd;
     printf("The LCM of two numbers is %d.\n",lcm);
    
    return 0;
}
