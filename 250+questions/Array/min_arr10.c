#include<stdio.h>
int main(){
  int a[5],size,min,i;
 /*printf("ENTER SIZE OF ARRAY\n");
  scanf("%d",&size);*/
  printf("ENTER ARRAY ELEMENTS\n");
  for(i=0;i<5;i++){
      scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=0;i<5;i++){
    if(a[i]<min){
      min=a[i];
    }
  }
  printf("MINIMUM VALU of ARRAY %d\n",min);
return 0;
}
