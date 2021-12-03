/*1 1
  2 2
  3 3*/
  
#include<stdio.h>
int main()
{

int i,j;
printf("enter i value\n");
scanf("%d",&i);
printf("enter j value\n");
scanf("%d",&j);
for(i=1 ;i<=6;i++){
for(j=1;j<=6;j++)
printf("%d\t%d\n",i,j);
}
return 0;

}
