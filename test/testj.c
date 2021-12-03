#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'J':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if (i==1||j==3||i==5&&(j<4)||i==4&&(j<2))
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
                   
