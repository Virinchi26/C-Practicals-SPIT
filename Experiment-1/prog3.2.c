#include <stdio.h>

int main()

{
    int A,B,C;

    printf("Enter two angles of A,B\n");
    scanf("%d" "%d", &A,&B);
    C=180-(A+B);

     
    if(A+B>180)
     {
        printf("Triangle is invalid");
     }
    else{
        printf("Third Angle C= %d",C);
    }
    
   
    return 0;
}