#include<stdio.h>
 void exchange(int *,int *);
 int main(){
    int a,b;
    printf(" enter first number\n");
    scanf("%d",&a);
    printf(" enter second number\n");
    scanf("%d",&b);
    printf("before swaping a:%d,b:%d\n",a,b);
    exchange(&a,&b);
    printf("after swaping a:%d,b:%d\n",a,b);
    
 return 0;
 }
 void exchange(int *p,int *q){
     *p=*p+*q;
     *q=*p-*q;
     *p=*p-*q;
 }
