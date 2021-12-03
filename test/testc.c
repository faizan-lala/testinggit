#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'C':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=4;j++)
              {  
  		if (i==1||i==5||j==1||j==5)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

}
return 0;
}

