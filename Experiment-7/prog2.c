#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100], str4[100], str5[100], str6[100], str7[100], str8[100];
    int u, i, option, l1 = 0, l2 = 0, count = 0, len;
    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    printf("i)copy one string to another one by one character.\nii) Find the string length\niii) compare two strings\niv) reverse the string\nv) Concatenate one string to another string.\nvi) lower case to upper\n");
    printf("Enter the option you want: ");
    scanf("%d", &option);
    for (i = 0; str1[i] != '\0'; ++i)
    {
        l1++;
    }
    for (i = 0; str2[i] != '\0'; ++i)
    {
        l2++;
    }

    switch (option)
    {
    case 1:
        for (i = 0; str1[i] != '\0'; i++)
        {

            str3[i] = str1[i];
        }
        printf("%s\n", str3);

        for (i = 0; str2[i] != '\0'; i++)
        {

            str4[i] = str2[i];
        }
        printf("%s\n", str4);

        break;
    case 2:

        printf("Length of String 1 is %d\n", l1);
        printf("Length of String 2 is %d\n", l2);
        break;
    case 3:
        if (l1 >= l2)
        {
            for (int i = 0; i < l1; i++)
            {
                if (str1[i] == str2[i])
                {
                    count++;
                }
                else if (str1[i] < str2[i])
                {
                    printf("%s > %s", str2, str1);
                    break;
                }
                else if (str1[i] > str2[i])
                {
                    printf("%s > %s", str1, str2);
                    break;
                }
            }

            if (count = l1)
            {
                printf("Both strings are same");
            }
        }
        else if (l1 < l2)
        {

            for (int i = 0; i < l2; i++)
            {
                if (str1[i] < str2[i])
                {
                    printf("%s < %s", str1, str2);
                    return 0;
                }
                else
                {
                    printf("%s < %s", str2, str1);
                    return 0;
                }
            }
        }
        break;
    case 4:
        printf("Reverse of the string 1: ");
        for (i = 0; str1[i] != '\0'; i++)
        {
            printf("%c", str1[l1 - 1 - i]);
        }
        printf("\n");
        printf("Reverse of the string 2: ");
        for (i = 0; str2[i] != '\0'; i++)
        {
            printf("%c", str2[l2 - 1 - i]);
        }
        break;
    case 5:
        for (i = 0; i < l1; i++)
        {
            str5[i] = str1[i];
        }
        for (i = 0; i < l2; i++)
        {
            str5[l1 + i] = str2[i];
        }
        printf("%s", str5);
        break;
    case 6:
        for (i = 0; str1[i] !='\0'; i++)
        {
            str7[i] = str1[i] - 32;
        }
        printf("%s",str7);

        printf("\n");
        for (i = 0; str2[i] !='\0'; i++)
        {
            str8[i] = str2[i] -32;
        }
        printf("%s",str8);
        break;

        return 0;
    }
}