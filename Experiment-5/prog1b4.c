#include <stdio.h>
int*sort(int*n)
{   int min=0,temp=0,i,j,c;
    printf("Enter the numbers \n");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<c;i++)
    {
        min=n[i];
        for(j=i+1;j<c;j++)
        {
            if(c[j]<min)
            {   temp=min;
                min=c[j];
                c[j]=temp;
            }
        }
        c[i]=min;
    }
    return n;
}


int main()
{   int num[n],mid=0,min=0,max=n-1,k=0;
    int*a=sort(num);
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
   printf("The number is present and its index in sorted array is %d",mid);
   else
   printf("The number is not present in the array:" );
       return 0;
}