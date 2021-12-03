#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'I':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if (j==3||i==1||i==5)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
