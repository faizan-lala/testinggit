#include <stdio.h>
 int main(){
 int i,j;
 char ch;
 printf("enter a small character\n");
 scanf("%c",&ch);
 switch(ch){
 case 'd': 
  for(i=1;i<=7;i++){
     for(j=1;j<=5;j++){
       if(j==1&&i>=5&&i<=6||j==5||i==4&&j>=2&&j<=5||i==7&&j>=2&&j<=5)
         printf("*");
          else
            printf(" ");
       }
        printf("\n");
   }
  }
   return 0;
   
 }
  
