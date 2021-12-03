//print a fibonacci series
#include<stdio.h>
int main(){
int a,b,c,n;
a=0;
b=1;
printf("Enter the number of term\n");
scanf("%d",&n);
printf("%d\n",a);
printf("%d\n",b);
while(n!=2){
printf("%d\n",c=a+b);
a=b;
b=c;
n=n-1;
}


return 0;}
