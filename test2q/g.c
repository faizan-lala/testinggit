#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'g':  for(i=1;i<=7;i++){
              for(j=1;j<=5;j++){
                if(i==1&&j>=2&&j<=4||i==4&&j>=2&&j<=5||i==7&&j>=2&&j<=5||j==1&&i>=2&&i<=3||j==5&&i>=2&&i<=7||i==6&&j==1)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
