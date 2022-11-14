#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
   
    int vowels=0, consonents=0,words=1;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowels += 1;
            else
                consonents += 1;
        }
        else if(str[i]==' ')  
        words++;
    }
    printf("No of vowels in the string: %d\n", vowels);
    printf("No of consonents in the string: %d\n", consonents);
    printf("No. of characters: %d\n",vowels+consonents);
    printf("No. of words: %d\n",words++);
   
    return 0;
}