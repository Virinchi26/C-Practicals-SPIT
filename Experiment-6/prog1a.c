#include <stdio.h>
int main()
{

  int arr1[10][10], arr2[10][10], i, j, num;

  int a, b;
  printf("Enter rows and column of matrix: ");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("Enter the elements of first matrix: \n");
  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      scanf("%d", &num);
      arr1[i][j] = num;
    }
  }
  printf("Enter the elements of second matrix: \n");
  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      scanf("%d", &num);
      arr2[i][j] = num;
    }
  }

  printf("Addition of matrix : \n");
  int sum;
  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      sum = 0;
      sum = arr2[i][j] + arr1[i][j];
      printf("%d ", sum);
    }
    printf("\n");
  }

  printf("Subtraction of matrix : \n");
  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      sum = 0;
      sum = arr1[i][j] - arr2[i][j];
      printf("%d ", sum);
    }
    printf("\n");
  }

  printf("Multiplication of matrix : \n");
  for (i = 0; i < a; i++)
  {
    sum = 0;
    for (j = 0; j < b; j++)
    {
      sum = sum + arr1[i][j] * arr2[j][i];
      printf("%d ", sum);
    }
    printf("\n");
  }

  printf("Transpose of matrix : \n");
  for (i = 0; i < b; i++)
  {
    for (j = 0; j < a; j++)
    {
      printf("%d ", arr1[j][i]);
    }
    printf("\n");
  }

  return 0;
}