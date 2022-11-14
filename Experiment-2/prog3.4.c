#include <stdio.h>
#include <math.h>

int main()
{
   int i=0,num;
   printf("Enter a number: \n");
   scanf("%d",&num);
   int temp=num;
   while (temp>0)
   {
       temp=temp/10;
       i++;
   }
   double sq=num*num;
   double b=pow(10,i);
   double a=fmod(sq,b);
   int c=sq/b;
   double p=a+c;
   if (num==p)
   {
       printf("Is a kaprekar number");
   }
    else
    {
        printf("Is not  a kaprekar number");
    }   
    return 0;
}
