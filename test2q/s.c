#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 's':  for(i=1;i<=7;i++){
              for(j=1;j<=4;j++){
                if(i==1&&j>=2&&j<=3||i==4&&j>=2&&j<=3||i==7&&j>=2&&j<=3||j==1&&i>=2&&i<=3||j==4&&i>=5&&i<=6||i==2&&j==4||i==6&&j==1)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
