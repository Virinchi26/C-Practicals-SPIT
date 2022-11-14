#include <stdio.h>
#include <math.h>

int main()
{
int n, k1, k2, sq, digits, num, power; 
printf("Enter your any number: \n");
scanf("%d", &n);

sq=n*n; 
while(sq!= 0)
{
digits++;
sq=sq/10;
}
if(digits%2==0)
{

} 
else 
{ 
  digits = digits + 1;
}
num=digits/2; 
power=pow(10, num); 
k1=sq % power; 
k2=(sq-k1)/power;

if(k1+k2==n)
{
printf("%d number is a Kaprekar number",n); 
}
else 
{
printf("%d number is not a Kaprekar number",n);
}

return 0;
}