#include <stdio.h>

int fib(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The Fibonacci series is ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",fib(i));
        
    }
    return 0;
}
int fib(int n)
{
    int f;
    if (n==0)
    {
       return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        f= fib(n-1)+fib(n-2);
        return f;
    }

}
