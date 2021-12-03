Faizan khan <faizankhaan6267448042@gmail.com>
	
Fri, Nov 19, 7:34 PM (14 hours ago)
	
to Vansh, kavitaahirwar0206, sapnaprajapat079
#include <stdio.h>
#include <string.h>
int ak, bk, ck, dk, ek, fk;
int marksheet1()
{

       char student_name[30], father_name[30], university_name[50],
           college_name[30], stream[30], ATKT[5];
       int roll_no, enrollment_no, semester;
       int t_hindi, i_hindi, t_english, i_english, t_physics, i_physics, t_c, p_c, t_math, i_math,
           t_statics, i_statics, obtained;

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
       scanf("%d", &semester);
       printf("ENTER YOUR ROLL-NO:-\n");
       scanf("%d", &roll_no);
       printf("ENTER YOUR ENROLLMENT-NO:-\n");
       scanf("%d", &enrollment_no);

       printf(".....ENTER MARKS SUBJECT WISE.....\n");
       printf("THEORY MARKS WILL BE OUT OF 50\n");
       printf("INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25\n");
       printf("ENTER THE THEORY MARKS OF HINDI\n");
       scanf("%d", &t_hindi);
       printf("ENTER THE INTERNAl MARKS OF HINDI\n");
       scanf("%d", &i_hindi);
       printf("ENTER THE THEORY MARKS OF ENGLISH\n");
       scanf("%d", &t_english);
       printf("ENTER THE INTERNAL MARKS OF ENGLISH\n");
       scanf("%d", &i_english);
       printf("ENTER THE THEORY MARKS OF PHYSICS\n");
       scanf("%d", &t_physics);
       printf("ENTER THE INTERNAL MARKS OF PHYSICS\n");
       scanf("%d", &i_physics);
       printf("ENTER THE THEORY MARKS OF C \n");
       scanf("%d", &t_c);
       printf("ENTER THE PRACTICAL MARKS OF C\n");
       scanf("%d", &p_c);
       printf("ENTER THE THEORY MARKS OF MATH\n");
       scanf("%d", &t_math);
       printf("ENTER THE INTERNAL MARKS OF MATH\n");
       scanf("%d", &i_math);
       printf("ENTER THE THEORY MARKS OF STATICS\n");
       scanf("%d", &t_statics);
       printf("ENTER THE INTERNAL MARKS OF STATICS\n");
       scanf("%d", &i_statics);

       obtained = t_hindi + i_hindi + t_english + i_english + t_physics + i_physics + t_c + p_c +
                  t_math + i_math + t_statics + i_statics;
       //percentage = (obtained) / 6;
       printf("................................................................................\n\n");
       printf("\t\t\t.....MARKSHEET.....\n\n");
       printf("................................................................................\n\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);
       printf("SEMESTER:-%d\n\n", semester);
       printf("................................................................................\n\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n\n");
       printf("................................................................................\n\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              ak++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              ak++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              ak++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              ak++;
       }

       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              ak++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              ak++;
       }
       printf("................................................................................\n\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n\n", obtained);
       if (ak > 4)
              printf("FAIL\n");
       else if (ak == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n\n");

       return ak;
}

int marksheet2()
{

       char student_name[30], father_name[30], university_name[50],
           college_name[30], stream[30], ATKT[5];
       int  roll_no, enrollment_no, semester;
       int t_hindi, i_hindi, t_english, i_english, t_physics, i_physics, t_c, p_c, t_math, i_math,
           t_statics, i_statics, obtained;
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
       scanf("%d", &semester);
       printf("ENTER YOUR ROLL-NO:-\n");
       scanf("%d", &roll_no);
       printf("ENTER YOUR ENROLLMENT-NO:-\n");
       scanf("%d", &enrollment_no);

       printf(".....ENTER MARKS SUBJECT WISE.....\n");
       printf("THEORY MARKS WILL BE OUT OF 50\n");
       printf("INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25\n");
       printf("ENTER THE THEORY MARKS OF HINDI\n");
       scanf("%d", &t_hindi);
       printf("ENTER THE INTERNAl MARKS OF HINDI\n");
       scanf("%d", &i_hindi);
       printf("ENTER THE THEORY MARKS OF ENGLISH\n");
       scanf("%d", &t_english);
       printf("ENTER THE INTERNAL MARKS OF ENGLISH\n");
       scanf("%d", &i_english);
       printf("ENTER THE THEORY MARKS OF PHYSICS\n");
       scanf("%d", &t_physics);
       printf("ENTER THE INTERNAL MARKS OF PHYSICS\n");
       scanf("%d", &i_physics);
       printf("ENTER THE THEORY MARKS OF C \n");
       scanf("%d", &t_c);
       printf("ENTER THE PRACTICAL MARKS OF C\n");
       scanf("%d", &p_c);
       printf("ENTER THE THEORY MARKS OF MATH\n");
       scanf("%d", &t_math);
       printf("ENTER THE INTERNAL MARKS OF MATH\n");
       scanf("%d", &i_math);
       printf("ENTER THE THEORY MARKS OF STATICS\n");
       scanf("%d", &t_statics);
       printf("ENTER THE INTERNAL MARKS OF STATICS\n");
       scanf("%d", &i_statics);

       obtained = t_hindi + i_hindi + t_english + i_english + t_physics + i_physics + t_c + p_c +
                  t_math + i_math + t_statics + i_statics;
       //percentage = (obtained) / 6;
       printf("................................................................................\n\n");
       printf("\t\t\t.....MARKSHEET.....\n\n");
       printf("................................................................................\n\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);
       printf("SEMESTER:-%d\n\n", semester);
       printf("................................................................................\n\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n\n");
       printf("................................................................................\n\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              bk++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              bk++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              bk++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              bk++;
       }

       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              bk++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              bk++;
       }
       printf("................................................................................\n\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n\n", obtained);
       if (bk > 4)
              printf("FAIL\n");
       else if (bk == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n\n");

       return bk;
}
  int main(){
      int k1;
     marksheet1();
     if(ak>=1&&ak<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet1();
     }
     else if(ak==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet1();
    if(ak>=1&&ak<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet1();
       printf("\n\n\n");
  printf("................................................................\n");
     }
     else if(ak==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet1();
    if(ak>=1&&ak<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet1();
     }
     else if(ak==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet1();
    if(ak>=1&&ak<5){
       printf("YEAR BACK\n");
       marksheet1();
     }
     else if(ak==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("YEAR BACK\n");
     }
    }
   }
  }  
  printf("\n\n\n");
  printf("................................................................\n");
 printf("SECOND SEM DETAILS\n\n");
     marksheet2();
     if(bk>=1&&bk<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet2();
     }
     else if(bk==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet2();
    if(bk>=1&&bk<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet2();
     }
     else if(bk==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet2();
    if(bk>=1&&bk<5){
       printf("ATKT IN FIRST SEM\n");
       marksheet2();
     }
     else if(bk==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("FAIL IN FIRST SEM\n");
         marksheet2();
    if(bk>=1&&bk<5){
       printf("YEAR BACK\n");
       marksheet2();
     }
     else if(bk==0){
         printf("PASS IN FIRST SEM\n");
     }
     else {
         printf("YEAR BACK\n");
     }
    k1=ak+bk;
    if(k1>=5){
      printf("YEAR BACK\n");
     }
    else
      printf("WELCOME TO SECOND YEAR\n");  
    }
   }
  }
  printf("\n\n\n");
  printf(".................................................................................");
  return 0;
 }

	

