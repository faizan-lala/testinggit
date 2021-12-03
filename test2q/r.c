#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'r':  for(i=1;i<=6;i++){
              for(j=1;j<=6;j++){
                if(j==1||i==1&&j==4||i==2&&j==2||i==2&&j==6)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
  
