//sum of all even and odd number
#include<stdio.h>
int main(){
int n,es=0,os=0,i;
  printf("enter total no. of element\n");
   scanf("%d",&n);
     int a[n];
      printf("enter %d elemnt\n",n);
        for(i=0;i<n;i++)
          scanf("%d",&a[i]);
        for(i=0;i<n;i++){
      if (a[i]%2==0)
     es=es+a[i];
    else
   os=os+a[i];
    }
  printf("even sum: %d\n",es);
  printf("odd sum : %d\n",os);
  
 return 0;
}


