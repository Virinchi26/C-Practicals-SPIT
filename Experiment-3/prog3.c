#include <stdio.h>
int div(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum =sum + i;
        }
    }
    return sum;
}
int ami(int x, int y)
{
    int a, b;
    a = div(x);
    b = div(y);
    if (a == y && b == x)
    
        return 1;
    
    else
    
        return 0;
    
}
/*int div(int);
int ami(int,int);*/
int main()
{
    int p, x, y;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    p = ami(x, y);
    if (p == 1)
    {
        printf("\nTrue, The numbers are amicable");
    }
    else if (p == 0)
        {
            printf("\nFalse, The numbers are not amicable");
        }
    return 0;
}

