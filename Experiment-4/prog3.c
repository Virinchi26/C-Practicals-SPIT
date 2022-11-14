#include <stdio.h>

int pattern(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Pattern is \n");
    pattern(n);
    return 0;
}
int pattern(int n)
{
    
    if (n>0)
    {
        printf("%d ",n);
        pattern(n-5);
        printf("%d ",n); 
    }
    else if(n<=0)
    {
        printf("%d ",n);
    }
    
}     
