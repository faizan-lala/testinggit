#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'O':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=7;j++)
              {  
  		if(i==1&&j==1||i==1&&j==7||i==5&&j==1||i==5&&j==7)
                   printf(" ");
                else if(i==1||j==1||i==5||j==7) 
                
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
                   
