#include<stdio.h>
int ackerman( int m , int n);

int main()
{
int m=1,n=1;
printf("m,n         m=1              m=2              m=3 \n");
for(n=1;n<=10;n++)
{
    if(n<10)
    printf("n=%d         ",n);
    if(n>=10)
    printf("n=%d           ",n);
    for(m=1;m<=3;m++)
    {
        printf("A(%d,%d)=%d         ",m,n,ackerman(m,n));
    }
   printf("\n");
}
return 0;
}

int ackerman(int m , int n)
{ 
    if(m==0)
      return n+1;
    else if(m!=0 && n==0)
      return ackerman(m-1,1);
    else if ( m!=0 && n!=0)
      return ackerman(m-1,ackerman(m,n-1));
    
}