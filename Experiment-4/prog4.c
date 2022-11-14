#include <stdio.h>
int ack(int, int);
int main()
{
    int r;
    printf("Enter a range: ");
    scanf("%d",&r);
    printf("m\tn\tAckerman value:\n");
    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j <=6; j++)
        {
            printf("n=%d    A(1,%d)=%d   A(2,%d)=%d\t    A(3,%d)=%d  \n",i,j,ack(i,j));
        }
        
    }
    
    return 0;
}
int ack(int m, int n)
{
    if (m==0)
    {
        return n+1;
    }
    else if(m>0 &&n==0)
    {
        return ack(m-1,1);
    }
    else if (m>0&& n>0)
    {
        return ack(m-1,ack(m,n-1));
    }
    return 1;
}    
    
    

