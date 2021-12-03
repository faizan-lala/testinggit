#include<stdio.h>
int main(){
  int a[5]={10,20,30,40,50};
  int element,i,flag=0;
   printf("enter a element\n");
   scanf("%d",&element );
   for (i=0;i<5;i++)
   {
    if (a[i]==element)
    {
      flag=1;
      break;
    }
    if(flag==1)
     printf("element found\n");
    else 
     printf("element not found\n");
   }
 return 0;
}
