#include <stdio.h>
#include <string.h>
#define MAX 75
void main()
{
    char s[] = "I LOVE CANADA BECAUSE CANADA IS A GREAT COUNTRY.";
    char word[MAX], rpwrd[MAX], str[MAX][MAX];
    int i = 0, j = 0, k, w, p;

    printf("I LOVE CANADA BECAUSE CANADA IS A GREAT COUNTRY.\n\n");
    printf("Word to be Replaced: ");
    scanf("%s", word);
    printf("Enter the word that will take %s's place: ", word);
    scanf("%s", rpwrd);

    p = strlen(s);
    for (k = 0; k < p; k++)
    {
        if (s[k] != ' ')
        {
            str[i][j] = s[k];
            j++;
        }
        else
        {
            str[i][j] = '\0';
            j = 0;
            i++;
        }
    }
    str[i][j] = '\0';
    w = i;
    for (i = 0; i <= w; i++)
    {
        if (strcmp(str[i], word) == 0)
            strcpy(str[i], rpwrd);

        printf("%s ", str[i]);
    }
}