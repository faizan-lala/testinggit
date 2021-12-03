#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'k':  for(i=1;i<=7;i++){
              for(j=1;j<=4;j++){
                if(j==1||i+j==6||i-j==2)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
