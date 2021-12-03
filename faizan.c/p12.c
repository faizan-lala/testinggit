//logical operators
#include<stdio.h>
int main()
{
int a,b,c,d,p,q,r,s,t;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
printf("Enter the value of c\n");
scanf("%d",&c);
printf("Enter the value of d\n");
scanf("%d",&d);

p=(a>b)&&(++c<d);
q=(a<b)&&(++c>d);
r=!(a>b);
s=(a<b)||(++c>d);
t=(a>b)&&(++c<d)||(++a<b);


printf("p : %d\nq : %d\nr : %d\ns : %d\nt : %d\n",p,q,r,s,t);
return 0;
}
