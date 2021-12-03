#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'H':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=4;j++)
              {  
  		if (j==1||j==4||i==3)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");
  }
}
return 0;
}
