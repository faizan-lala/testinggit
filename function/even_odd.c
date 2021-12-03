#include<stdio.h>
 int even_odd(int n){
    if(n%2==0)
     return 0;
    else
     return 1;
 }
 
 int main(){
   int n;
   printf("enter number\n");
   scanf("%d",&n);
   
   if(even_odd(n))
     printf("odd\n");
   else
     printf("even\n");
 return 0;
 }
