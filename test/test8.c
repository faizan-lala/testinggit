#include<stdio.h>
int main(){
int i,j;
 int N;
printf("ENTER A NUMBER\n");
scanf("%d",&N);
switch(N){
 case 8:
          for (i=1;i<=6;i++)
           {
           for (j=1;j<=6;j++)
              {  
  		if(i==1&&j>=2&&j<=4||i==4&&j>=2&&j<=4||i==7&&i>=2&&i<=4||j==1&&i>=2&&i<=3||j==1&&i>=5&&i<=6||j==5&&i>=2&&i<=2||j==5&&i>=5&&i<=6)
                  
                    printf("*");
                     
              else   
                    printf(" ");
                  

               }
             printf("\n");

           }

         }
return 0;
}
