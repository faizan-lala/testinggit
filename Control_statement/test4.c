#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
if(i==j||j==i||i==5||j==1)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
return 0;
}
