#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'x':  for(i=1;i<=5;i++){
              for(j=1;j<=5;j++){
                if(i-j==0||i+j==6)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
