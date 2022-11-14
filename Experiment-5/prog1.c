#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i,j,min,temp;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j=i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;

		
		swap(&arr[min], &arr[i]);
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i=0; i < n; i++)
    printf("%d ",arr[i]);
    
}
int main()
{
	int n;
    printf("Enter the number of  elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of array elements: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }
	printf("Sorted Array arr[%d] : ",n);
    selectionSort(arr, n);
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
	//printArray(arr, n);
	return 0;
}

