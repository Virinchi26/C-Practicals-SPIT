#include<stdio.h>
#include<string.h>
struct flight
{ 
 char from[10];
char to[10];
char departure[10];
char arrival[10];
char seats[10];
};
int main(int argc, char const *argv[])
{ char a[10],b[10],c=0;
int i;
struct flight m[20];
strcpy(m[0].from,"BOM");
strcpy(m[0].to,"DEL");
strcpy(m[0].departure,"1120");
strcpy(m[0].arrival,"1430");
strcpy(m[0].seats,"105");
strcpy(m[1].from,"BOM");
strcpy(m[1].to,"DEL");
strcpy(m[1].departure,"0900");
strcpy(m[1].arrival,"1145");
strcpy(m[1].seats,"125");
strcpy(m[2].from,"BOM");
strcpy(m[2].to,"HYD");
strcpy(m[2].departure,"2030");
strcpy(m[2].arrival,"0045");
strcpy(m[2].seats,"25");
strcpy(m[3].from,"BOM");
strcpy(m[3].to,"HYD");
strcpy(m[3].departure,"0600");
strcpy(m[3].arrival,"0830");
strcpy(m[3].seats,"15");
strcpy(m[4].from,"BOM");
strcpy(m[4].to,"DEL");
strcpy(m[4].departure,"1120");
strcpy(m[4].arrival,"1300");
strcpy(m[4].seats,"19");
strcpy(m[5].from,"BOM");
strcpy(m[5].to,"ABU");
strcpy(m[5].departure,"2220");
strcpy(m[5].arrival,"0600");
strcpy(m[5].seats,"15");
strcpy(m[6].from,"BOM");
strcpy(m[6].to,"NYC");
strcpy(m[6].departure,"1020");
strcpy(m[6].arrival,"2300");
strcpy(m[6].seats,"5");
strcpy(m[7].from,"BOM");
strcpy(m[7].to,"NYC");
strcpy(m[7].departure,"0420");
strcpy(m[7].arrival,"1850");
strcpy(m[7].seats,"12");
strcpy(m[8].from,"BOM");
strcpy(m[8].to,"NAG");
strcpy(m[8].departure,"1000");
strcpy(m[8].arrival,"1400");
strcpy(m[8].seats,"25");
strcpy(m[9].from,"BOM");
strcpy(m[9].to,"DEL");
strcpy(m[9].departure,"0920");
strcpy(m[9].arrival,"1230");
strcpy(m[9].seats,"15");
strcpy(m[10].from,"DEL");
strcpy(m[10].to,"NYC");
strcpy(m[10].departure,"0900");
strcpy(m[10].arrival,"1145");
strcpy(m[10].seats,"125");
strcpy(m[11].from,"DXB");
strcpy(m[11].to,"ABU");
strcpy(m[11].departure,"2030");
strcpy(m[11].arrival,"0045");
strcpy(m[11].seats,"25");
strcpy(m[12].from,"DXB");
strcpy(m[12].to,"BOM");
strcpy(m[12].departure,"2030");
strcpy(m[12].arrival,"0045");
strcpy(m[12].seats,"25");
strcpy(m[13].from,"BOM");
strcpy(m[13].to,"HYD");
strcpy(m[13].departure,"0800");
strcpy(m[13].arrival,"1030");
strcpy(m[13].seats,"15");
strcpy(m[14].from,"BOM");
strcpy(m[14].to,"DEL");
strcpy(m[14].departure,"0620");
strcpy(m[14].arrival,"1000");
strcpy(m[14].seats,"19");
strcpy(m[15].from,"BOM");
strcpy(m[15].to,"ABU");
strcpy(m[15].departure,"2000");
strcpy(m[15].arrival,"0300");
strcpy(m[15].seats,"15");
strcpy(m[16].from,"BOM");
strcpy(m[16].to,"NYC");
strcpy(m[16].departure,"1020");
strcpy(m[16].arrival,"2300");
strcpy(m[16].seats,"5");
strcpy(m[17].from,"BOM");
strcpy(m[17].to,"NYC");
strcpy(m[17].departure,"0420");
strcpy(m[17].arrival,"1850");
strcpy(m[17].seats,"12");
strcpy(m[18].from,"NYC");
strcpy(m[18].to,"NAG");
strcpy(m[18].departure,"1000");
strcpy(m[18].arrival,"1400");
strcpy(m[18].seats,"25");
strcpy(m[19].from,"DXB");
strcpy(m[19].to,"BOM");
strcpy(m[19].departure,"0020");
strcpy(m[19].arrival,"0400");
strcpy(m[19].seats,"15");
printf("SEARCH FLIGHT --->\n\n");
printf("From : ");
scanf("%s",a);
printf("To : ");
scanf("%s",b);
printf("\n");
for ( i = 0; i <20; i++)
{ 
if (strcmp(a,m[i].from)==0 && strcmp(b,m[i].to)==0 )
{ printf("\nFrom \t: %s\n",m[i].from);
printf("To \t: %s\n",m[i].to);
printf("Departure \t: %s\n",m[i].departure);
printf("Arrival \t: %s\n",m[i].arrival);
printf("Available seats\t: %s\n",m[i].seats);
c++;
}
}
if (c==0)
{
printf("We apologise as there are no flights available!");
}
return 0;
