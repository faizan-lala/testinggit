#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'R':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=4;j++)
              {  
               if (j==1||i==1&&j<4||i==3&&j<4||i-j==1||i==2&&j==4)
                
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
