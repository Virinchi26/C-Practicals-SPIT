#include<stdio.h>


int ack(int m,int n)
{
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return ack(m-1,1);
    if(m>0&&n>0)
    return ack(m-1,ack(m,n-1));
    
    return(0);
}

int main()
{
    printf("\t m=1 \t\t\t m=2 \t\t\t m=3 \t\t\t\n");
    for(int n=1;n<=6;n++)
    {
        printf("\n\n n=%d",n);
        for(int m=1;m<=3;m++)
        printf("\t A(%d,%d) = %d\t",m,n,ack(m,n));
    }
    return(0);
}