#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=20;i++){
for(j=1;j<=20;j++)
 
if(i==10||j==10)
printf("*");

else 
printf(" ");
} printf("\n");
return 0;
}
