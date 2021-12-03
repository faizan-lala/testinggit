#include <stdio.h>
int main () {
int n,r,sum=0;
  printf("ENTER A NUMBER\n");
  scanf("%d",&n);
    int a[n];
     while(n!=0)
       {
         r=n%10;
         sum=sum*10+r;
          n=n/10;
       }
return 0;
}


