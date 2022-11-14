#include<stdio.h>
int main()
{   int n,i,j,rank,a,b,t,r;
    printf("Enter number of Employees: ");
    scanf("%d",&n);
    int emp[n][2];

    for ( i = 0; i < n; i++)
    {
    printf("Enter ID: ");
    scanf("%d",&emp[i][1]);
    printf("Enter age: ");
    scanf("%d",&emp[i][0]);
    printf("\n");
    
    
    emp[i][0]=2022+65-emp[i][0];
    }

for ( i = 0; i < n-1; i++)
{  rank=i;
   for ( j = i+1; j < n; j++)
   {
       if (emp[rank][0]>emp[j][0])
       {
           rank=j;
       }
   }
   a=emp[rank][0];
   b=emp[i][0];
   emp[rank][0]=b;
   emp[i][0]=a;

   t=emp[rank][1];
   r=emp[i][1];
   emp[rank][1]=r;
   emp[i][1]=t;
}
printf("Retriment Year:   Employee ID: \n");
for ( i = 0; i < n; i++)
{
   if ((n!=0) && (emp[i][0]==emp[i-1][0]))
   {
       
       printf("\t             %d",emp[i][1]);
   }
   else
   {
    
       printf("%d\t             %d",emp[i][0],emp[i][1]);
   }
   printf("\n");
}
    return 0;
}