#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=13;i++){
for(j=1;j<=13;j++){
if(i==7||j==7)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
