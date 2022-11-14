#include <stdio.h>
int main()
{
    int bin=0,deci,rem=0,place=1;
    printf("Enter a decimal number: \n");
    scanf("%d", &deci);
    while (deci!=0)
    {
        rem=deci%2;
        deci=deci/2;
        bin=bin+(rem*place);
        place=place*10;
    }
    printf("Binary equivalent = %d",bin);
    
    return 0;
}
