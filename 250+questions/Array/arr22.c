#include<stdio.h>
void reverse_arr();
int main()
{  
 reverse_arr();
 return 0;
}

void reverse_arr(){
   int a[5],i;
   printf("ENTER ARRAY ELEMENTS :\n");
   for (i=0;i<=4;i++){
     scanf("%d",&a[i]);
   }
   printf("REVERSE ARRAY ELEMENTS:\n");
   for(i=4;i>=0;i--){
      printf("%d\n",a[i]);
   }
}
