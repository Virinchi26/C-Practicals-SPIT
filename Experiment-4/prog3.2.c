#include <stdio.h>

int printPattern(int);
int main()
{
    int n=16;
    return 0;
}
int printPattern(int n)
{
    
    int  flag,true,false,m;
     if (flag == false && n ==m)
        return;
     
    
    if (flag)
    {
 
    if (m-5 > 0)
printPattern(n, m-5, true);
    else 
        printPattern(n, m-5, false);
    }
    else 
        printPattern(n, m+5, false);
}
 

void PrintPattern(int m)
{
    if (m > 0)
    {
    PrintPattern(m - 5);
    }
}
    
    
 