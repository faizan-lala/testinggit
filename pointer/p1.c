#include<stdio.h>
 int main(){
    int a=10;
    int *p;
    int **q;
    p=&a;
    q=&p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",**q);
   return 0;
   //http://solancer.blogspot.com/2011/05/turbo-c-on-ubuntu-using-dosbox.html
  }
