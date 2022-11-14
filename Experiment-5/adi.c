#include<stdio.h>
void countarray(int a[],int n);
void printarray(int a[],int);
int main()
{
    int n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array a[%d] = ",n);
    printarray(a,n);
    countarray(a,n);
    return 0;
}
void printarray(int a[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void countarray(int a[],int n)
{
    int visited;
    for(int j=0;j<n;j++)
    {
        int ctr=1;
        for(int i=1+j;i<n;i++)
        {
            if(a[j]==a[i])
            {
                ctr++;
                a[i]=visited;
            }    
            
        }
        if(a[j]!=visited)
            printf("\nThe number %d is %d times",a[j],ctr);
       
    }
}