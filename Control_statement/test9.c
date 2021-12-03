 /*

    5
   45
  345
 2345
12345
4321
432 
43  
4

*/
 #include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
for(j=1;j<=5;j++){
if(j>=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
} 

for(i=1;i<=4;i++){
for(j=4;j>=1;j--){
if(j>=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
} 
return 0;
}
