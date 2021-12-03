#include<stdio.h>
int main()
{
int a=8,b=2,c=5,d=1,e=11;

a=++c;
b=++a;
e=b++;
d=--a;
c=--b;
e=b--;
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);



return 0;
}
