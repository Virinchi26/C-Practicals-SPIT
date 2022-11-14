#include<stdio.h>
int Ack(int m, int n);

int main()
{
        int m,n;
       for(n=0; n<=10; n++){
       
           for(m=0; m<=3; m++){
           if(n==0){
              if(m==0){
                  printf("m:n\t| ");
              }
              else{
                  printf("m=%d\t\t| ",m);
              }
           }
           else{
               if(m==0){
                   printf("n=%d\t| ",n);
               }
               else{
                   printf("A(%d,%d)=%d\t|",m,n,Ack(m,n));
               }
           }
       }
       printf("\n");
           
       }
       return 0;
}

int Ack(int m, int n)
{
        if(m==0)
                return n+1;
        else if(m!=0 && n==0)
                return Ack(m-1,1);
        else if(m!=0 && n!=0)
                return Ack(m-1,Ack(m,n-1));
}
