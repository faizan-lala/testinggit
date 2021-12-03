#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'E':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=3;j++)
              {  
  		if (i==1||i==5||i==3||j==1)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

}
return 0;
}

