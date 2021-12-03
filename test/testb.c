#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'B':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=4;j++)
              {  
  		if (i==1||i==3||i==5||j==1||j==4)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

}
return 0;
}

