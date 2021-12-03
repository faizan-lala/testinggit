/*#include<stdio.h>
int main(){
int i,j,space;
for(i=5;i>=1;i--)

{
for   (space=1;space<i;space++)
printf(" ");
for   (j=5;j<=1;j--)
printf("*");
 }
printf("\n");

return 0;
}*/
#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
for(j=1;j<=5;j++){
if(j>=i)
printf("*");
else
printf(" ");
}
printf("\n");
} 
return 0;
}
