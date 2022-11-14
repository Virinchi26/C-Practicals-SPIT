#include <stdio.h>
int main()
{
    int t, n, a=0, b=1, c=0;
    printf("\nEnter number of terms required in Fibonacci Series:- ");
    scanf("%d",&n);
    printf("\nThe Fibonacci Series is:\n\n\n %d %d ", a, b); 
   
    t=2;    
   
    while (t<n)
    {
        c=a+b;
        a= b;
        b= c;
        ++t;
        printf("%d",c);
        
    }
    return 0;
}