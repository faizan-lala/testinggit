#include<stdio.h>
void copy_arr();
 int main(){
    copy_arr();
 return 0;
 }
 
 void copy_arr(){
    int num[100],copy[100],*p,*p1,n,i;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    p=num;
    p1=copy;
    printf("enter array elements\n");
    for(i=0;i<n;i++){
       printf("enter number of elements in pocket[%d]\n",i);
       scanf("%d",&*(p+i));
    } 
    printf("array elements\n");
    for(i=0;i<n;i++){
       printf("%d\t",*(p+i));
       printf("\n");
    }
    for(i=0;i<n;i++){
       *(p1+i)=*(p+i);
    }
    printf("COPY ARRAY ELEMENTS USING POINTER\n");
    for(i=0;i<n;i++){ 
       printf("%d\t\n",*(p1+i));
    }
 
 }
