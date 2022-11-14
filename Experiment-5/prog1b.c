#include <stdio.h>
void binary_search(int *first, int *last)
{
    int middle, n,search,a[100],middle;

    *first = 0;
    *last == n - 1;
    middle = (*first + *last) / 2;
    while (*first <= *last)
    {
        if (a[middle] < search)
            *first = middle + 1;
        else if (a[middle] == search)
        {
            printf("%d is present at index %d.\n", search, middle + 1);
            break;
        }
        else
            *last = middle - 1;
        middle = (*first + *last) / 2;
    }
}
int main()
{
   int c, first, last, middle, n, search, a[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&a[c]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
    printf("\n");
    binary_search(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}