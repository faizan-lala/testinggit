#include<stdio.h>
 int mul(int,int);
 int mul(int x,int y){
     int z;
     z=x*y;
     return z; 
 }
 
 int main(){
   int a,b,x;
   printf("ENTER TWO NUMBERS  FOR MULTIPLICATON\n");
   scanf("%d%d",&a,&b);
   x=mul(a,b);
   printf("RESULT IS : %d\n",x);
   return 0;
 }
