#include<stdio.h>
int main()
{
int a=5,b=7,c=4,d=8,e=9;

a=++c;
b=++a;
e=b++;
d=--a;
c=--b;
e=b--;
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);



return 0;
}
