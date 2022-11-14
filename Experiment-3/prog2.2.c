#include <stdio.h>
void fact()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d except %d : ", num, num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe sum of given factors of %d is %d\n", num, sum);
}
int main()
{
    fact();
    return 0;
}