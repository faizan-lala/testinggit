#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'Y':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=5;j++)
              {  
               if (i<=3&&i-j==0||i<=3&&i+j==6||j==3&&i>2)
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
