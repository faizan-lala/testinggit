/*#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'Q':
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=6;j++)
              {  
  		if(i==1&&j==1||i==5&&j==5||i==4&&j==1||i==4&&j==5)
                   printf(" ");
                else if(i==1||j==5||i==4||j==5) 
                
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }*/

#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'O':
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=7;j++)
              {  
  		if(i==1&&j==1||i==1&&j==7||i==5&&j==1||i==5&&j==7||i==6&&j==1)
                   printf(" ");
                else if(i==1||j==1||i==5||j==7||i==4&&j==5||(j==7&&i==6)) 
                
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
               
         























                   
