//Q.13..........program for finding parcentage and grade
#include<stdio.h>
int main(){
float Parcentage,physics,chemistry,math,biology,computer;
printf("Enter marks in physics out of 100\n");
scanf("%f",&physics);
printf("Enter marks in chemistry out of 100\n");
scanf("%f",&chemistry);
printf("Enter marks in math out of 100\n");
scanf("%f",&math);
printf("Enter marks in biology out of 100\n");
scanf("%f",&biology);
printf("Enter marks in computer out of 100\n");
scanf("%f",&computer);
Parcentage=(physics+chemistry+math+biology+computer)/5;
printf("Parcentage=%f\n",Parcentage);
if(Parcentage>=90)
printf("\n passed with Gread 'A'");
else
if(Parcentage>=80)
printf("\n passed with Gread 'B'");
else
if(Parcentage>=70)
printf("\n passed with Gread 'C'");
else
if(Parcentage>=60)
printf("\n passed with Gread 'D'");
else
if(Parcentage>=40)
printf("\n passed with Gread 'E'");
else
if(Parcentage<40)
printf("\n passed with Gread 'F'");
return 0;}
