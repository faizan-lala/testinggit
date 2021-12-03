#include<stdio.h>
int main(){
int a[5],i,sum=0;
float avg;
printf("enter 5 numbers\n");
     for(i=0;i<=4;i++)
     scanf("%d",&a[i]);
        for(i=0;i<=4;i++)
        sum=sum+a[i];
          avg=sum/5.0;
          printf("avg is %2f",avg);
 return 0;
  }
