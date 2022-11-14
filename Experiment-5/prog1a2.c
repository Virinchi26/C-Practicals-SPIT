#include <stdio.h>
void Sort(int arr[], int n);
int main()
{
  int arr[100], n, i;
  printf("Enter number of elements : ");
  scanf("%d", &n);
  printf("Enter %d Numbers : ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  Sort(arr, n);
  return 0;
}
void Sort(int arr[], int n)
{
  int i, j, position, swap;
  for (i = 0; i < (n - 1); i++)
  {
    position = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[position] > arr[j])
        position = j;
    }
    if (position != i)
    {
      swap = arr[i];
      arr[i] = arr[position];
      arr[position] = swap;
    }
  }
  printf("Sorted Array : ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
