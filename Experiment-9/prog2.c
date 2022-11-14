#include <stdio.h>
#include<string.h>
int main(void) {
	char str[32],str1[100];
	scanf("%s",str);
	int t,count=0;
	scanf("%d",&t);
	int i,j,k;
	while(t--)
	{
	   scanf("%s",str1);
	   for(i=0;i<strlen(str1);i++)
	   {
	      for(j=0;j<strlen(str1);j++)
	       {
	            if(str[j]==str1[i])
	            {
	                count++;
	                break;
	            }
	       } 
	   if(count==strlen(str1))
	    {
	        printf("Yes\n");   
	    }
	    else
	      {
	          printf("No\n");
	      }
	   }
	 }
	return 0;
}

