#include<stdio.h>
 int max(int,int);
 int max(int a,int b){
    if(a>b)
      return a;
    else
      return b;
 }
 
 int main(){
    int a,b,c,d,x;
    printf("enter numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=max(max(a,b),max(c,d));
    printf("max is: %d\n",x);
 return 0;
 }
