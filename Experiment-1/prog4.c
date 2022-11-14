#include <stdio.h>
int main()
{
float f,c;
printf("Enter temperature in Farenheit\n");
scanf("%f",&f);

c=(f- 32) * 5 / 9;
printf("Temperature %f in degree celsius= %.2f C",f,c);

return 0;

}