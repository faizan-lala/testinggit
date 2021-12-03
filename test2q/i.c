#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'i':  for(i=1;i<=9;i++){
              for(j=1;j<=3;j++){
                if(i==1&&j==2||i==3&&j==2||j==1&&i==2||j==3&&i==2||j==2&&i>=5&&i<=9)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
