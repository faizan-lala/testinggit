#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'V':
          for (i=1;i<=4;i++)
           {
           for (j=1;j<=7;j++)
              {  
               if (i-j==0||i+j==8)
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
