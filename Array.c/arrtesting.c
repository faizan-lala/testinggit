#include<stdio.h>
int main()
{ 
  int n;
  int a[n],i;
  printf("enter size of array\n");
  scanf("%d",&n);
  printf("ENTER ARRAY ELEMENTS :\n");
  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
     printf("ARRAY ELEMENTS:");
      for(i=0;i<n;i++){
       printf("%d\n",a[i]);
       }
     return 0;
  }
