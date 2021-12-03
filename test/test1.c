#include<stdio.h>
int main (){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 1:
          for (i=1;i<=5;i++)
           {
           for (j=1;j<=3;j++)
              {  
  		if(i==5||j==2||i==2&&j==1)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
