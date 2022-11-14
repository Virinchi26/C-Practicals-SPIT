#include <stdio.h>
int*sort(int*n)
{   int min=0,temp=0,i,j;
    printf("enter 14 numbers \n");
    for(i=0;i<14;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<14;i++)
    {
        min=n[i];
        for(j=i+1;j<14;j++)
        {
            if(n[j]<min)
            {   temp=min;
                min=n[j];
                n[j]=temp;
            }
        }
        n[i]=min;
    }
    return n;
}


int main()
{   int n[14],mid=0,min=0,max=13,k=0;
    int*a=sort(n);
    printf("enter the number to be searched \n");
    int x;
    scanf("%d",&x);
   while(min<=max)
   { mid=(min+max)/2;
       if(a[mid]==x)
       {
        k=1;
        break;
       }
       else if(x>a[mid])
       min=mid+1;
       else
       max=mid-1;
   }
   if(k==1)
   printf("the number is present and its index in sorted array is %d",mid);
   else
   printf("the number is not present" );
       return 0;
}