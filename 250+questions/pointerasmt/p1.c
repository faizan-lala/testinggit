/*#include<stdio.h>
 int main(){
   int a,b,c;
   int *p,*q,*r;
   printf("enter first number\n");
   scanf("%d",&a);
   printf("enter second numbers\n");
   scanf("%d",&b);
   p=&a;
   q=&b;
   *r=*p+*q;
   printf("sum is :%d\n",*r);  
 return 0;
 }*/
 #include<stdio.h>
 void add();
 int main(){
   add();
 return 0;
 }
 void add(){
 int a,b,c;
   int *p,*q,*r;
   printf("enter first number\n");
   scanf("%d",&a);
   printf("enter second numbers\n");
   scanf("%d",&b);
   p=&a;
   q=&b;
   *r=*p+*q;
   printf("sum is :%d\n",*r);  
   }
