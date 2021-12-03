#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'j':  for(i=1;i<=10;i++){
              for(j=1;j<=6;j++){
                if(i==1&&j==5||i==3&&j==5||j==4&&i==2||j==6&&i==2||j==5&&i>=5&&i<=9||i==10&&j>=2&&j<=4||i==9&&j==1)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
