#include<stdio.h>
int main (){
int i,j;
char ch;
printf("ENTER A CHARACTER\n");
scanf("%c",&ch);
switch(ch){
 case 'G':
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=6;j++)
              {  
  		

                   if(j==1||i==5&&j==2||i==5&&j==3||i==5&&j==6||i==3&&j==4|| i==3&&j==4||         i==3&&j==5||i==3&&j==6||i==4&&j==4||i==4&&j==6)
                     printf("*");
                     else   
                    printf(" ");
                  

               }
             printf("\n");

           }

}
return 0;
}

