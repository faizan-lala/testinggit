#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 's':
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=4;j++)
              {  
               if (i==1&&j==1||i==1&&j==4||i==6&&j==1||i==6&&j==4) 
                  printf(" ");
  		if(i==1&&j==2||i==1&&j==3||i==2&&j==4||i==6&&j==2||i==6&&j==3||i==5&&j==1||i==2&&j==1||i==3&&j==2||i==4&&j==3||i==5&&j==4)
                
          
                 printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
           }
         }
return 0;
}
