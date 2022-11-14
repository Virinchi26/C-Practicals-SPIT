#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Number a\n");
    scanf("%d", &a);

    printf("Enter Number b\n");
    scanf("%d", &b);

    printf("The Sum is %d\n", a + b);
    printf("The Subtraction is %d\n", a - b);
    printf("The Multiplication is %d\n", a * b);
    printf("The Division is %d\n", a / b);
    printf("The Modulus is %d\n", a % b);

    return 0;
}