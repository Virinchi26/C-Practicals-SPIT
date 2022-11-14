#include<stdio.h>

int main()
{ int min,n,grade[n];
  int j,t,i;
  
  printf("please enter the number of grades you wanna input:");
  scanf("%d",&n);
  for(int w=0;w<n;w++)
{  printf("please enter the grade number %d:",w+1);
  scanf("%d",&grade[w]);
}
min=grade[0];
for(int j=0;j<n;j++)
{ 
  for(i=0;i<n;i++)
  { if(grade[i]<min)
      { t=min;
     min=grade[i];
      grade[i]=t;}}
   }

      for(int i=0;i<n;i++)
      {printf("%d",grade[i]);}

     
        
    return 0;
}