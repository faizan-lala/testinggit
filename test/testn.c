#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'N':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if(j==1||j==5||i==j)
         // if(j==1||j==5||i==2&&j==2||i==3&&j==3||i==4&&j==4)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
                   
