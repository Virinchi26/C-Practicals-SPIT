#include <stdio.h>

int prodiv(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum of Proper divisors= %d",prodiv(n));
    return 0;
}
int prodiv(int n)
{
    int i,prodiv=0;
    
    for ( i = 1; i < n; i++)
    {
       if (n%i==0)
       {
           prodiv=prodiv+i;
       }
       return prodiv; 
    }
}
