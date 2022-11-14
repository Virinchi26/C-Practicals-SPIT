#include <stdio.h>
int ack(int m,int n)
{
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return ack(m-1,1);
    if(m>0&&n>0)
    return ack(m-1,ack(m,n-1));
    
    return 0;
}
int main()
{
    int m,n;
    printf("Enter the range: ");
    scanf("%d %d",&m,&n);
    printf("Ackerman numbers are: \n");
    printf("m,n,   m=1   m=2   m=3\n");
    for (int i = 1; i <=n; i++)
    {
        printf("n=%d  ",i);
        for (int j = 1; j <=m; j++)
        {
            if (ack(j,i)>10)
            {
                printf("A(%d,%d)=%d   ",j,i,ack(j,i));
            }
            else
            {
                printf("A(%d,%d)=%d   ",j,i,ack(j,i));
            }
            printf("\n"); 
        }
    }    
    return 0;
}
