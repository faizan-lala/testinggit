#include<stdio.h>
  int update_value(int);
  int update_value(int x){
      x=x+10;
      return x;
  }
  
  int main(){
     int x,y;
     printf("ENTER A VALUE\n");
     scanf("%d",&x);
     x=update_value(x);
     printf("x: %d\n",x);
  }
