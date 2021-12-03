#include<stdio.h>
 void si(){
    int p,r,t;
    float si;
    printf("enter value\np:\nr:\nt:\n");
    scanf("%d%d%d",&p,&r,&t);
    si=p*r*t/100;
    printf("result is : %f",si);
 }
 int main(){
    si();
 return 0;
 }
