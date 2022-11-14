#include <stdio.h>
int*sort(int*n)
{   int min=0,temp=0,i,j;
    printf("Enter 14 numbers \n");
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
{    int n[14],i,j,k;
     int*b;
     b=sort(n);
     printf("Frequency of numbers are: \n");
     for(i=0;i<14;i++)
    { k=0;
      for(j=0;j<14;j++)
      {
          if(b[i]==b[j])
          k++;
      }
      if(b[i]==b[i+1])
      continue;
      printf(" %d is appearing %d times \n",b[i],k);
    }
    return 0;
}