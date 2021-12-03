#include<stdio.h>
 int div(int,int);
 int div(int x,int y){
     int z;
     z=x/y;
     return z; 
 }
 
 int main(){
   int a,b,x;
   printf("ENTER TWO NUMBERS  FOR DIVISION\n");
   scanf("%d%d",&a,&b);
   x=div(a,b);
   printf("RESULT IS : %d\n",x);
   return 0;
 }
