#include<stdio.h>
int main () 
{
 int i=0,n,pickelement=0;
 printf("enter total no element\n");
 scanf("%d",&n);
 int a[n];
 printf ("enter %d ele\n",n);
   for (i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
 if(n==1)
     {
       pickelement=1;
       
      }
 else if(n==2){
      if (a[0]!=a[1])
        {
          pickelement=1;
        }
      }
    for (i=0;i<n;i++){
   
          if(i==0){
                 if (a[i]>a[i+1])
                  {
                   pickelement=1;
                   break;
                  } 
                }
                else if(i==n-1){
                       if(a[i]>a[i-1])
                       {
                         pickelement=1;
                         break;
                       }
                     }
                     else if(a[i]>a[i-1]&&a[i]>a[i+1]){
                            pickelement=1;
                            break;
                          }
                       
                 }

                
                    if(pickelement)
                      printf("1");
                     else 
                       printf("0");


       } 


