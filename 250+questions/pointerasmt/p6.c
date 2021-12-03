#include<stdio.h>
void reverse_arr();
 int main(){
    reverse_arr();
 return 0;
 }
  
 void reverse_arr(){
    int a[]={10,20, 30, 40,50};
    int *p,i;
    p=&a[4];
    for(i=4;i>=0;i--){
      printf("%d\n",*p);
      p--;
    }
 }
