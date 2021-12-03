#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'o':  for(i=1;i<=6;i++){
              for(j=1;j<=8;j++){
                if(i==1&&j>=2&&j<=4||i==5&&j>=2&&j<=4||j==1&&i>=2&&i<=4||j==5&&i>=2&&i<=4)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
