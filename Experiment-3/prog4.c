#include <stdio.h>


int power(int, int);

int main()
{
  int x = 7, n = 3;
  printf("%d^%d=%d",x,n,power(x, n));
  return 0;
}
int power(int x, int n)
{
  int pro = 1;
  while (n > 0)
  {
    if (n % 2 == 1)
    
      pro = pro * x;
      x = x * x;
      n = n / 2;
  }

  return pro;
}
