#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'q':  for(i=1;i<=7;i++){
              for(j=1;j<=7;j++){
                if(j==5||i==1&&j>=2&&j<=4||i==4&&j>=2&&j<=4||j==1&&i>=2&&i<=3||i==6&&j==6||i==5&&j==7)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
