//enter element an find element and its position
#include<stdio.h>
int main(){
 int n,element,i,k=0;
  printf("enter n\n");
  scanf("%d",&n);
  int a[n],pos[n];
  printf("enter %d element\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter element\n ");
  scanf("%d",&element);  
  for(i=0;i<n;i++)
  {
    if (a[i]== element)
    {
       pos[k++]=i;//pos[k]=i;k++;
    }
  }
  if(k!=0){
    printf("element found %d times at index ",k);
    for(i=0;i<k;i++){
      printf("%4d",pos[i]);
    }
    printf("\n");
  }
  else{
    printf("element not found");
  }
  return 0;
}
