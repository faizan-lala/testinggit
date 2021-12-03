#include<stdio.h>
int main()
{  
  int a[5],i,j,temp;
  printf("ENTER ARRAY ELEMENTS :\n");
   for(i=0;i<=4;i++){
      scanf("%d",&a[i]);
   }  
  for (i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         }
       }
     }  
     printf("ARRAY ELEMENTS IN DESCENDING ORDER\n:");
      for(i=0;i<5;i++){
       printf("%d\n",a[i]);
       }
     return 0;
  }
