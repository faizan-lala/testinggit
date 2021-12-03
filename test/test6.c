#include<stdio.h>
int main(){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 7:
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=6;j++)
              {  
  		if(i==1&&i>=1&&j<=5||j==5||i==3&&j>=3&&j<=6)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
