#include<stdio.h>
 void square();
 void square(){
  int i,j;
    for(i=1;i<=4;i++){
      for(j=1;j<=4;j++){
        if(i==1||i==4||j==1||j==4)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    } 
 }
 
 int main(){
   square();
   return 0;
 }
