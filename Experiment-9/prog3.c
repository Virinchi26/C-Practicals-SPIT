#include <stdio.h>

void main()
{
    FILE *fp;
    char c;
    fp=fopen("aiml.txt","w");
    for ( c = 'c'; c <'g'; c++)
    {
        putc(c,fp);
    }
    fclose(fp);
    
}