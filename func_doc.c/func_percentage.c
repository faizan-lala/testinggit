#include<stdio.h>
 void percentage(){
     int hindi,english,maths,physics,chemistry;
     float percentage;
     printf("enter numbers\nhindi:\nenglish:\nmaths:\nphysics:\nchemistry:\n");
     scanf("%d%d%d%d%d",&hindi,&english,&maths,&physics,&chemistry);
     percentage=(hindi+english+maths+physics+chemistry)/5;
     printf("percentage: %f\n",percentage);
 }
 
 int main(){
     percentage();
 return 0;
 }
