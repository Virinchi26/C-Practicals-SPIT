#include<stdio.h>
int pro(int,int);
int main()

{
printf("Following numbers are : \n");
for(int i=10; i <= 99; i++)
{
    for(int j=10; j <= 99; j++)
    {
        if(pro(i,j))
        {
            printf("(%d,%d)",i,j);
        }
        
    }
    
}
return 0;
}
int pro(int x, int y)
{ 
    int b = x%10;
    int a = x/10;
    int d = y%10;
    int c = y/10;
    if (a != b && c != d)
    {
        if ((10*a+b)*(10*c+d) == (10*b+a)*(10*d+c))
        { 
            return 1;
        }
        else {return 0;          
        }
    }
      
    else {
        return 0; }
    
}
