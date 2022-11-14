#include<stdio.h>
#include<string.h>
struct player
{
char name[20],country[20];
int match,hundred;
};
int main()
{ int i,n;
printf("Enter the number of players: ");
scanf("%d",&n);
struct player m[n];
for ( i = 0; i < n; i++)
{ 
printf("Enter the name of player: ");
scanf("%s",m[i].name);
printf("Enter country name: ");
scanf(" %s",m[i].country);
printf("Enter number of matches played: ");
scanf(" %d",&m[i].match);
printf("Enter number of hundreds: ");
scanf(" %d",&m[i].hundred);
printf("\n");
}
printf ("Name of the player\tCountry\t Number of Matches played\tNumber of hundreads scored.\n");
for ( i = 0; i < n; i++)
{
printf ("\t%s \t\t",m[i].name);
printf (" %s \t\t",m[i].country);
printf ("%d \t\t\t",m[i].match);
printf ("\t%d \n",m[i].hundred);
}
return 0;
}
