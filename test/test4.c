#include<stdio.h>
int main (){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 4:
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if(j==4||i==4||i+j==5)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
