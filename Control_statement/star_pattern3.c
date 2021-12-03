/* ****
   *** 
   **  
   *    
*/ 
#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=4;i++){
for(j=4;j>=1;j--){
if(j>=i)
printf("*",j);
else
printf(" ");
}
printf("\n");
} 
return 0;
}
