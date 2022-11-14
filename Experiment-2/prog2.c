#include <stdio.h>
#include <math.h>

int check_prime(int n);
int main()
{
    int start, end;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    for(int i = start; i < end; i++)
    {
        if(check_prime(i) && check_prime(i + 2))
        {
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1;
        }
    }

    return 0;

}

int check_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
