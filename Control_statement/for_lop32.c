#include<stdio.h>
int main (){
int i,j;
for(i=1;i<=10;i++)
{
for (j=5;j>=1;j--){
if (i>j&&i<=10-j)
printf(" ");
else 
printf("* ");
}
printf("\n");}
return 0;
}
