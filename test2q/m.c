#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'm':  for(i=1;i<=6;i++){
              for(j=1;j<=8;j++){
                if(j==2||j==5&&i>=3&&i<=6||j==8&&i>=3&&i<=6||i==2&&j>=2&&j<=4||i==2&&j>=6&&j<=7||i==1&&j==1)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
