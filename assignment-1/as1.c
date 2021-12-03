//Q1...w.a.p. to find lowest number among four diffrent number.
#include <stdio.h>
 int main(){

int a,b,c,d,x,y;
printf("enter a number\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b)
x=a;
else
x=b;
if(c<d)
y=c;
else
y=d;
if(x<y)
printf("%d is a lowest no...",x);
else
printf("%d is a lowest no..",y);
return 0;
}
