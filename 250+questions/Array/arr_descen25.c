#include<stdio.h>
void descen_arr(int a[],int i){
   int j,temp;
   for (i=0;i<5;i++){
    for(j=i+1;j<5;j++){
      if(a[i]<a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         }
       }
     }  
     printf("ARRAY ELEMENTS IN DESCENDING ORDER\n:");
      for(i=0;i<5;i++){
       printf("%d\n",a[i]);
       }
}
int main()
{  
  int a[5],i;
  printf("ENTER ARRAY ELEMENTS :\n");
   for(i=0;i<=4;i++){
      scanf("%d",&a[i]);
   }  
   descen_arr(a,i);
  return 0;
  }
  
