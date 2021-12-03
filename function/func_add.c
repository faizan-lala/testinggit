#include <stdio.h>
 void add(){
  int a,b,c;
  printf("ENTER TWO NUMBERS FOR ADDING\n");
  scanf("%d%d",&a,&b); 
  c=a+b;
  printf("result is %d",c);
 }
 void sub(){
  int a,b,c;
  printf("\nENTER TWO NUMBERS FOR SUBSTRACTION\n");
  scanf("%d%d",&a,&b); 
  c=a-b;
  printf("result is %d",c);
 }
 void mul(){
  int a,b,c;
  printf("\nENTER TWO NUMBERS FOR MULTIPLICATION\n");
  scanf("%d%d",&a,&b); 
  c=a*b;
  printf("result is %d",c);
 }
 void div(){
  int a,b,c;
  printf("\nENTER TWO NUMBERS FOR DIVIDE\n");
  scanf("%d%d",&a,&b); 
  c=a/b;
  printf("result is %d",c);
 }
 
 int main(){
  add();
  sub();
  mul();
  div();
  return 0;
 
 }
