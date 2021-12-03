#include<stdio.h>
#include<string.h>
 void marksheet(){

  char student_name[30],father_name[30],university_name[50],
       college_name[30],stream[30],ATKT[5];
  int k=0,roll_no,enrollment_no,semester;
  int t_hindi,i_hindi,t_english,i_english,t_physics,i_physics,t_c,p_c,t_math,i_math,
      t_statics,i_statics,obtained;
  float percentage;  
   
  printf("ENTER UNIVERSITY NAME:-\n");
  gets(university_name);
  printf("ENTER STREAM:-\n");
  gets(stream);
  printf("ENTER COLLEGE NAME:-\n");
  gets(college_name);
  printf("ENTER YOUR NAME:-\n");
  gets(student_name);
  printf("ENTER FATHER NAME:-\n");
  gets(father_name);
  printf("ENTER  SEMESTER:-\n");
  scanf("%d",&semester);
  printf("ENTER YOUR ROLL-NO:-\n");
  scanf("%d",&roll_no);
  printf("ENTER YOUR ENROLLMENT-NO:-\n");
  scanf("%d",&enrollment_no);
  
  printf(".....ENTER MARKS SUBJECT WISE.....\n");
  printf("ENTER THE THEORY MARKS OF HINDI\n");
  scanf("%d",&t_hindi);
  printf("ENTER THE INTERNAL MARKS OF HINDI\n");
  scanf("%d",&i_hindi);
  printf("ENTER THE THEORY MARKS OF ENGLISH\n");
  scanf("%d",&t_english);
  printf("ENTER THE INTERNAL MARKS OF ENGLISH\n");
  scanf("%d",&i_english);
  printf("ENTER THE THEORY MARKS OF PHYSICS\n");
  scanf("%d",&t_physics);
  printf("ENTER THE INTERNAL MARKS OF PHYSICS\n");
  scanf("%d",&i_physics);
  printf("ENTER THE THEORY MARKS OF C \n");
  scanf("%d",&t_c);
  printf("ENTER THE PRACTICAL MARKS OF C\n");
  scanf("%d",&p_c);
  printf("ENTER THE THEORY MARKS OF MATH\n");
  scanf("%d",&t_math);
  printf("ENTER THE INTERNAL MARKS OF MATH\n");
  scanf("%d",&i_math);
  printf("ENTER THE THEORY MARKS OF STATICS\n");
  scanf("%d",&t_statics);
  printf("ENTER THE INTERNAL MARKS OF STATICS\n");
  scanf("%d",&i_statics);
  
  obtained=t_hindi+i_hindi+t_english+i_english+t_physics+i_physics+t_c+p_c+
             t_math+i_math+t_statics+i_statics;
  percentage=(obtained)/6;
       printf("................................................................................\n\n");
  printf("\t\t\t.....MARKSHEET.....\n\n");
     printf("................................................................................\n\n");
  printf("\t\t%s\n",university_name);
  printf("\t\t%s\n",stream);
  printf("\t\tCOLLEGE NAME:-%s\n\n",college_name);
  printf("STUDENT NAME:-%s",student_name);
  printf("\t\t\tROLL-NO:-%d\n",roll_no);
  printf("FATHER NAME:-%s",father_name);
  printf("\t\t\tENROLLMENT-NO:-%d\n",enrollment_no);
  printf("SEMESTER:-%d\n\n",semester);
     printf("................................................................................\n\n");
  printf("\tSUBJECTS");
  printf("\tTHEORY");
  printf("\t\tINTERNAL");
  printf("\tPRACTICAL");
  printf("\tRESULT\n\n");
   printf("................................................................................\n\n");
  if(t_hindi>17&&i_hindi>10){
    printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n",t_hindi,i_hindi);
  }
  else{
    printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n",t_hindi,i_hindi);
    k++;
  }
  if(t_english>17&&i_english>10){
    printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n",t_english,i_english);
  }
  else{
    printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n",t_english,i_english);
    k++;
  }
  if(t_physics>17&&i_physics>10){
    printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n",t_physics,i_physics);
  }
  else{
    printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n",t_physics,i_physics);
    k++;
  }
  if(t_c>17&&p_c>10){
    printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n",t_c,p_c);
  }
  else{
    printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n",t_c,p_c);
    k++;
  }
  
  if(t_math>17&&i_math>10){
    printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n",t_math,i_math);
  }
  else{
    printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n",t_math,i_math);
    k++;
  }
  if(t_statics>17&&i_statics>10){
    printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n",t_statics,i_statics);
  }
  else{
    printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n",t_statics,i_statics);
    k++;
  }
  printf("................................................................................\n\n");
  printf("TOTAL OBTAINED MARKS:-%d\n",obtained);
  printf("PERCENTAGE:-%f\n\n",percentage);
  if(k>4)
  printf("fail\n");
  else if (k==0)
  printf("pass\n");
  else
  printf("atkt\n");
  
   printf("................................................................................\n\n");
 
  
  
 }
  
 int main(){
    marksheet();
    marksheet();
    marksheet();
 return 0;
 } 
  
