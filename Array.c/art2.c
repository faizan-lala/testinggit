#include<stdio.h>
int main(){
int i,n,min,max;
printf("enter number of element");
scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
  {
   printf("enter%delement",(i+1));
   scanf("%d",&arr[i]);
  } 
  min=max=arr[0];
