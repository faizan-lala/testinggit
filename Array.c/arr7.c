#include<stdio.h>
int main(){
int a[5];
int index;
for(index=0;index<5;index++)
  {
printf("enter %d element\n",[index+1]);
   scanf("%d",&a[index]);
  }
     for(index=0;index<5;index++)
    {	
	printf("%d\n",a[index]);
	}


    return 0;
}
