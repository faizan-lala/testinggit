#include<stdio.h>
 void a();
 void a(){
   int i,j;
     for (i=1;i<=5;i++)
       {
        for (j=1;j<=5;j++)
          {  
           if(i==1||i==5||i+j==6)
              printf("*");
           else   
              printf(" ");
           }
          printf("\n");
        }
   }
  int main(){
    a();
  return 0;
  }
