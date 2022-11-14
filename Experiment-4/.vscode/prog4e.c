#include <stdio.h>
int ack(int m,int n);
int main()
{
    int m,n;
    for ( m = 0; m <=10; m++)
    {
        if (n==0)
        {
            if (m==0)
            {
                printf("m:n \t ");
            }
            else
            {
                printf("m=%d \t\t  ",m);
            }
            
        }
        else{
            if (m==0)
            {
                printf("n=%d \t ",n);
            }
            else
            {
                printf("Ack(%d,%d)=%d\t ",m,n,ack(m,n));
            }
        }
        
    }
    printf("\n");
}

int ack(int m,int n)
{
    if (m==0)
    {
        return n+1;
    }
    else if (m!=0 && n==0)
    {
        return ack(m-1,1);
    }
    else if (m!=0 && n!=0)
    {
        return ack(m-1,ack(m,n-1));
    }

    
}