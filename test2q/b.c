#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'b': 
  for(i=1;i<=7;i++){
     for(j=1;j<=5;j++){
       if(j==1||i==4&&j>=1&&j<=4||i==7&&j>=1&&j<=4||j==5&&i>=5&&i<=6)
         printf("*");
          else
            printf(" ");
       }
        printf("\n");
   }
 }
   return 0;
   
 }
  
