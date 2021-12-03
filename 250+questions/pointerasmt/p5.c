#include<stdio.h>
void swap_arr();
int main(){
   swap_arr();
return 0;
}
 void swap_arr(){
    int a[10],b[10],*p1,*p2,i;
   printf("ENTER 5 ELEMENTS OF FIRST ARRAY\n");
   for(i=0;i<5;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("ENTER 5 ELEMENTS OF SECOND ARRAY\n");
   for(i=0;i<5;i++)
   {
    scanf("%d",&b[i]);
   }
   p1=a;
   p2=b;
   
   for(i=0;i<5;i++)
   {
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
   }
   for(i=0;i<5;i++)
   {
    printf("\n%d\t%d\n",a[i],b[i]);
   }
 }
