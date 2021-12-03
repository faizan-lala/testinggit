#include<stdio.h>
void change_case(int a[]){
    int i=0;
    for(i=0;a[i]!='\0';i++)
      {
       if(a[i]>='A'&&a[i]<='Z')
        a[i]=a[i]+32;
       else if(a[i]>='a'&&a[i]<='z')
         a[i]=a[i]-32;
      }     
     printf("string is %s",a);

}
 void main()
{
  char a[50];
    printf("enter the string\n");
    fgets(a,50,stdin);
      
}
