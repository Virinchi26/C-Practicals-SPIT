#include <stdio.h>
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selecsort(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < n)
    {
        for (int i = start; i <= end; i++)
        {
            if (arr[i] < arr[start])
            {
                swap(arr, i, start);
            }
        }
        start++;
    }
}
int binarysearch(int *arr, int x, int n)
{
    selecsort(arr, n);
    int f = 0;
    int l = n;
    while (f != l)
    {
        int m = (f + l) / 2;

        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] > x)
        {
            f = 0;
            l = m - 1;
        }
        else if (arr[m] < x)
        {
            f = m + 1;
            l = n;
        }
    }
    return -1;
}
int main()
{
    int n, x;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be searched: ");
    scanf("%d", &x);
    int idx = binarysearch(arr, x, n);
    if (idx == -1)
    {
        printf("The number you entered is not present in the array.");
    }
    else
    {
        printf("The number you have entered is present at position %d in the array.", idx);
    }
    return 0;
}