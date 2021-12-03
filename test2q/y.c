#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'y':  for(i=1;i<=6;i++){
              for(j=1;j<=6;j++){
                if(i+j==7||i==1&&j==2||i==2&&j==3)
                 printf("*");
                  else
                   printf(" ");
               }
              printf("\n");
            }
          }
   return 0;
   
 }
