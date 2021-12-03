#include<stdio.h>
 int sub(int,int);
 int sub(int x,int y){
     int z;
     z=x-y;
     return z; 
 }
 
 int main(){
   int a,b,x;
   printf("ENTER TWO NUMBERS  FOR SUBSTRACT\n");
   scanf("%d%d",&a,&b);
   x=sub(a,b);
   printf("RESULT IS : %d\n",x);
   return 0;
 }
