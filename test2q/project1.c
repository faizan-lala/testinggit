#include<stdio.h>
#include<string.h>
 int main(){

  char student_name[30],father_name[30],university_name[30],
       college_name[30],stream[15];
  int roll_no,enrollment_no,semester;
  int hindi,english,physics,chemistry,math,urdu,obtained;
  float percentage;    
  
  printf("ENTER UNIVERSITY NAME:-\n");
  scanf("%s",&university_name);
  printf("ENTER COLLEGE NAME:-\n");
  scanf("%s",&college_name);
  printf("ENTER YOUR NAME:-\n");
  scanf("%s",&student_name);
  printf("ENTER FATHER NAME:-\n");
  scanf("%s",&father_name);
  printf("ENTER STREAM:-\n");
  scanf("%s",&stream);
  printf("ENTER  SEMESTER:-\n");
  scanf("%d",&semester);
  printf("ENTER YOUR ROLL-NO:-\n");
  scanf("%d",&roll_no);
  printf("ENTER YOUR ENROLLMENT-NO:-\n");
  scanf("%d",&enrollment_no);
  
  printf(".....ENTER MARKS SUBJECT WISE.....\n");
  printf("ENTER HINDI MARKS\n");
  scanf("%d",&hindi);
  printf("ENTER ENGLISH MARKS\n");
  scanf("%d",&english);
  printf("ENTER PHYSICS MARKS\n");
  scanf("%d",&physics);
  printf("ENTER CHEMISTRY MARKS\n");
  scanf("%d",&chemistry);
  printf("ENTER MATHS MARKS\n");
  scanf("%d",&math);
  printf("ENTER URDU MARKS\n");
  scanf("%d",&urdu);
  
  obtained=hindi+english+physics+chemistry+math+urdu;
  percentage=(obtained)/6;
  
  printf("\t\t    .....MARKSHEET.....\n");
  printf("\t\t    UNIVERSITY NAME:%s\n",university_name);
  printf("\t\t    COLLEGE NAME:-%s\n",college_name);
  printf("STUDENT NAME:-%s",student_name);
  printf("\t\t\tROLL-NO:-%d\n",roll_no);
  printf("FATHER NAME:-%s",father_name);
  printf("\t\t\tENROLLMENT-NO:-%d\n",enrollment_no);
  printf("SEMESTER :-%d",semester);
  printf("\t\t\tSTREAM:-%s\n",stream);
  printf("TOTAL OBTAINED MARKS:-%d\n",obtained);
  printf("PERCENTAGE:-%f\n",percentage);
 
  
  
 }
  
  
    
  
