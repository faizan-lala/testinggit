#include<stdio.h>
int main(){
int cp,sp;
printf("enter coast price:\n");
scanf("%d",&cp);
printf("enter selling price\n");
scanf("%d",&sp);
if (cp>sp)
printf("loss");

 else
 if(cp<sp)
printf("profit");
else

  printf("no profit no loss");



return 0;
}
