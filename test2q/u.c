#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'u':  for(i=1;i<=6;i++){
              for(j=1;j<=6;j++){
                if(j==1&&i>=1&&i<=4||j==5||i==5&&j>=2&&j<=5||i==6&&j==6)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
