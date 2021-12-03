#include<stdio.h>
 int add(int,int);
 int add(int x,int y){
     int z;
     z=x+y;
     return z; 
 }
 
 int main(){
   int a,b,x;
   printf("ENTER TWO NUMBERS  FOR ADDING\n");
   scanf("%d%d",&a,&b);
   x=add(a,b);
   printf("RESULT IS : %d\n",x);
   return 0;
 }
