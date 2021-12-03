/*  1
   1 3
  1   5
 1     7
123456789*/
#include<stdio.h>
int main()
{
int i,j,space;
for(i=1;i<=5;i++)
{
for(space=5;space>i;space--)
printf(" ");
for(j=1;j<=2*i-1;j++)
{
if(j==1||j==(2*i-1)||i==5)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}

return 0;
}
