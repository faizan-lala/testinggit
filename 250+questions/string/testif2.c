#include<stdio.h>
void greaterNo(){
    int a,b,c;
    printf("ENTER FIRST NUMBER\n");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER\n");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER\n");
    scanf("%d",&c);
    
    if(a>b)
    {
      printf("A IS GREATER NUMBER\n");
    }
    else 
    {
      printf("B IS GREATER NUMBER\n");
    
    if(a>c)
    {
      printf("A IS GREATER NUMBER\n");
    }
    else 
    {
      printf("C IS GREATER NUMBER\n");
    
    if(b>c)
    {
      printf("B IS GREATER NUMBER\n");
    }
    else 
    {
      printf("C IS GREATER NUMBER\n");
    }
  }  
}
}
int main(){
  greaterNo();
}
