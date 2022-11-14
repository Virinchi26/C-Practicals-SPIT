#include <stdio.h>
#include <math.h>

int main()
{
    double p = 500000, r = 3.5, n = 10, si, ci1, ci2, ci3, ci4, ci5;
    si = (p * n * r) / 100;
    ci1 = p * pow(1 + r / (100), n) - p;
    ci2 = p * pow(1 + r / (100 * 2), n * 2) - p;
    ci3 = p * pow(1 + r / (100 * 4), n * 4) - p;
    ci4 = p * pow(1 + r / (100 * 12), n * 12) - p;
    ci5 = p * pow(1 + r / (100 * 365), n * 365) - p;
    printf("The simple interest on Rs 500000 in 10 years is %.2lf\n", si);
    printf("\nThe compound interest on Rs 500000 in 10 years compounded annually  is = Rs.  %.2f", ci1);
    printf("\nThe compound interest on Rs 500000 in 10 years compounded semi-annually is = Rs. %.2f", ci2);
    printf("\nThe compound interest on Rs 500000 in 10 years compounded  quarterly is = Rs. %.2f", ci3);
    printf("\nThe compound interest on Rs 500000 in 10 years compounded  monthly is = Rs. %.2f", ci4);
    printf("\nThe compound interest on Rs 500000 in 10 years compounded  daily is = Rs. %.2f", ci5);

    return 0;
}