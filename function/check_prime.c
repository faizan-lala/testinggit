#include<stdio.h>
 void check_prime(int);
 void check_prime(int n){
     int i,flag=1;
     for (i=2;i<=n/2;i++){
       if(n%i==0){
         flag=0;
         break;
       }
     }
 
 if(flag=1)
   printf("%d",n);
} 
   int main(){
      int i;
      for(i=2;i<=100;i++){
        check_prime(i);
        return 0;
      }
   }
