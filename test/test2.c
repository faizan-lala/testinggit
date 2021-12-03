#include<stdio.h>
int main (){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 2:
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=5;j++)
              {  
  		if(i==1&&j>=2&&j<=4||i+j==7||i==6||i==2&&j==1)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
