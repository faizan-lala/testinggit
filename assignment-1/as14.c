//Q.14.............gross salary
#include<stdio.h>
int main(){
unsigned int bs;
float hra,da,gs;
printf("Enter the amount of basic salary \n");
scanf("%u",&bs);
if(bs<=10000)
{
hra=(bs*20)/100;
da=(bs*80)/100;
gs=bs+hra+da;
printf("hra is =%f\n",hra);
printf("da is =%f\n",da);
printf("gross salary is =%f\n",gs);
}
else
if(bs<=20000)
{
hra=(bs*25)/100;
da=(bs*90)/100;
gs=bs+hra+da;
printf("hra is =%f\n",hra);
printf("da is =%f\n",da);
printf("gross salary is =%f\n",gs);
}
else
if(bs>20000)
{
hra=(bs*30)/100;
da=(bs*95)/100;
gs=bs+hra+da;
printf("hra is =%f\n",hra);
printf("da is =%f\n",da);
printf("gross salary is =%f\n",gs);
}
return 0;
}
