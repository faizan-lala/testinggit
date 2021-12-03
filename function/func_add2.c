#include<stdio.h>
 int add (int x,int y){
    int z;
    z=x+y;
    return z;
 }
  
  int main(){
     int a,b,x;
     printf("enter a value\n");
     scanf("%d%d",&a,&b);
     x=add(a,b);
     printf("result is :%d\n",x);
  }
