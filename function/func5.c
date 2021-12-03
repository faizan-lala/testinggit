#include<stdio.h>
 void pyramid();
 void pyramid(){
     int i,j;
     for(i=1;i<=4;i++){
       for(j=1;j<=7;j++){
          if(i+j==5||j-i==3||i==4)
            printf("*");
          else
            printf(" ");
       }
      printf("\n");
     }
 }
 
 int main(){
    pyramid();
    return 0;
 }
