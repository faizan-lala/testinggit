#include<stdio.h>
void evenodd(){
    int n;
   printf("ENTER A NUMBER\n");
   scanf("%d",&n);
   if(n%2==0)
   {
     printf("EVEN\n");
   }
   else
   {
     printf("ODD\n");
   }
}
int main(){
   evenodd();
return 0;
}
