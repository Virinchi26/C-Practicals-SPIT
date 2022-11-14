#include <stdio.h>
#include <math.h>
int main() 
{
    int read,i = 0, j = 1,quotient, reminder;
    printf("\n Enter the Number :  ");
    scanf("%d", &read);
    int square = read * read;
    int square1 = square;
    while (square1 != 0)
    {
        square1 = square1/10;
        i++;
    }
    square1 = square;
    for (int k=1; k<i; k++)
    {
        j = pow(10, k);
        quotient = square1/j;
        reminder = square1%j;
        
        if (quotient + reminder == read)
        { 
            printf("The number is kaprekar number\n");
            
        }
    else {
    
    printf("The number is not kaprekar number\n");
    }
    }
    
    return 0;
}