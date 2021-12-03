;

       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");#include <stdio.h>
#include <string.h>
int ak, bk, ck, dk, ek, fk, temp = 0;
int t_hindi, i_hindi, t_english, i_english, t_physics, i_physics, t_c, p_c, t_math, i_math, t_statics, i_statics, semester;
char student_name[30], father_name[30], university_name[50], college_name[30], stream[30], ATKT[5];
int roll_no, enrollment_no;
int marksheet1()
{
       int obtained;

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

       printf(".....ENTER MARKS SUBJECT WISE.....\n\n");
       printf("...THEORY MARKS WILL BE OUT OF 50...\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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

       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);

       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n");
       printf("................................................................................\n");
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
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n", obtained);
       if (ak == 0)
       {
              temp = temp + obtained;
       }
       if (ak > 4)
              printf("FAIL\n");
       else if (ak == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n");

       return ak;
}

int marksheet2()
{
       int obtained;

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

       printf(".....ENTER MARKS SUBJECT WISE.....\n\n");
       printf("...THEORY MARKS WILL BE OUT OF 50...\n\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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

       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);
       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n\n");
       printf("................................................................................\n");
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
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n", obtained);
       if (bk == 0)
       {
              temp = temp + obtained;
       }
       if (bk > 4)
              printf("FAIL\n");
       else if (bk == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n");

       return bk;
}

int marksheet3()
{
       int obtained;

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
       printf("...THEORY MARKS WILL BE OUT OF 50...\n\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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

       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no)
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n\n");
       printf("................................................................................\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              ck++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              ck++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              ck++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              ck++;
       }

       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              ck++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              ck++;
       }
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n\n", obtained);
       if (ck == 0)
       {
              temp = temp + obtained;
       }
       if (ck > 4)
              printf("FAIL\n");
       else if (ck == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n");

       return ck;
}

int marksheet4()
{
       int obtained;

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
       printf("...THEORY MARKS WILL BE OUT OF 50...\n\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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
       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);

       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n");
       printf("................................................................................\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              dk++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              dk++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              dk++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              dk++;
       }
       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              dk++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              dk++;
       }
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n\n", obtained);
       if (dk == 0)
       {
              temp = temp + obtained;
       }
       if (dk > 4)
              printf("FAIL\n");
       else if (dk == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");
       printf("................................................................................\n");
       return dk;
}

int marksheet5()
{
       int obtained;

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
       printf("...THEORY MARKS WILL BE OUT OF 50...\n\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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
       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);

       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n");
       printf("................................................................................\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              ek++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              ek++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              ek++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              ek++;
       }

       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              ek++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              ek++;
       }
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n", obtained);
       if (ek == 0)
       {
              temp = temp + obtained;
       }
       if (ek > 4)
              printf("FAIL\n");
       else if (ek == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");

       printf("................................................................................\n");

       return ek;
}
int marksheet6()
{
       int obtained;
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
       printf(".....ENTER MARKS SUBJECT WISE.....\n\n");
       printf("...THEORY MARKS WILL BE OUT OF 50...\n");
       printf("...INTERNAL AND PRACTICAL MARKS WILL BE OUT OF 25...\n\n");
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
       printf("................................................................................\n");
       printf("\t\t\t.....MARKSHEET.....\n");
       printf("................................................................................\n");
       printf("\t\t%s\n", university_name);
       printf("\t\t%s\n", stream);
       printf("\t\tCOLLEGE NAME:-%s\n\n", college_name);
       printf("STUDENT NAME:-%s", student_name);
       printf("\t\t\tROLL-NO:-%d\n", roll_no);
       printf("FATHER NAME:-%s", father_name);
       printf("\t\t\tENROLLMENT-NO:-%d\n", enrollment_no);

       if (semester > 7)
       {
              printf("INVALID SEMESTER\n");
       }
       else
       {
              printf("SEMESTER:-%d\n\n", semester);
       }
       printf("................................................................................\n");
       printf("\tSUBJECTS");
       printf("\tTHEORY");
       printf("\t\tINTERNAL");
       printf("\tPRACTICAL");
       printf("\tRESULT\n\n");
       printf("................................................................................\n");
       if ((t_hindi > 17 && t_hindi <= 50) && (i_hindi > 10 && i_hindi <= 25))
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tPASS\n", t_hindi, i_hindi);
       }
       else
       {
              printf("\tHINDI\t\t%d\t\t%d\t\t\t\tATKT\n", t_hindi, i_hindi);
              fk++;
       }
       if ((t_english > 17 && t_english <= 50) && (i_english > 10 && i_english <= 25))
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tPASS\n", t_english, i_english);
       }
       else
       {
              printf("\tENGLISH\t\t%d\t\t%d\t\t\t\tATKT\n", t_english, i_english);
              fk++;
       }
       if ((t_physics > 17 && t_physics <= 50) && (i_physics > 10 && i_physics <= 25))
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_physics, i_physics);
       }
       else
       {
              printf("\tPHYSICS\t\t%d\t\t%d\t\t\t\tATKT\n", t_physics, i_physics);
              fk++;
       }
       if ((t_c > 17 && t_c <= 50) && (p_c > 10 && p_c <= 25))
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tPASS\n", t_c, p_c);
       }
       else
       {
              printf("\tC\t\t%d\t\t\t\t%d\t\tATKT\n", t_c, p_c);
              fk++;
       }
       if ((t_math > 17 && t_math <= 50) && (i_math > 10 && i_math <= 25))
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tPASS\n", t_math, i_math);
       }
       else
       {
              printf("\tMATHS\t\t%d\t\t%d\t\t\t\tATKT\n", t_math, i_math);
              fk++;
       }
       if ((t_statics > 17 && t_statics <= 50) && (i_statics > 10 && i_statics <= 25))
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tPASS\n", t_statics, i_statics);
       }
       else
       {
              printf("\tSTATICS\t\t%d\t\t%d\t\t\t\tATKT\n\n\n", t_statics, i_statics);
              fk++;
       }
       printf("................................................................................\n");
       printf("TOTAL MARKS:-450");
       printf("\t\t\t\t\tOBTAINED MARKS:-%d\n", obtained);

       if (fk == 0)
       {
              temp = temp + obtained;
       }
       printf("TOTAL=%d/2700\n", temp);
       if (fk > 4)
              printf("FAIL\n");
       else if (fk == 0)
              printf("PASS\n");
       else
              printf("ATKT\n");
       printf(".................................................................................\n");
       return fk;
}

int main()
{
       int k1,k2,k3;
       marksheet1();
       if (ak >= 1 && ak < 5)
       {
              printf("ATKT IN FIRST SEM\n");
       }
       else if (ak == 0)
       {
              printf("PASS IN FIRST SEM\n");
       }
       else
       {
              printf("FAIL IN FIRST SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet1();
              if (ak >= 1 && ak < 5)
              {
                     printf("ATKT IN FIRST SEM\n");
              }
              else if (ak == 0)
              {
                     printf("PASS IN FIRST SEM\n");
              }
              else
              {
                     printf("FAIL IN FIRST SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet1();
                     if (ak >= 1 && ak < 5)
                     {
                            printf("ATKT IN FIRST SEM\n");
                     }
                     else if (ak == 0)
                     {
                            printf("PASS IN FIRST SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN FIRST SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet1();
                            if (ak >= 1 && ak < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (ak == 0)
                            {
                                   printf("PASS IN FIRST SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }

       if(ak>=1&&ak<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ak>=1&&ak<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ak>=1&&ak<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }
       
       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- STATICS\n");
       }
       printf(".................................................................................\n");
       printf("SECOND SEM DETAILS\n\n");

       marksheet2();
       if (bk >= 1 && bk < 5)
       {
              printf("ATKT IN SECOND SEM\n");
       }
       else if (bk == 0)
       {
              printf("PASS IN SECOND SEM\n");
       }
       else
       {
              printf("FAIL IN SECOND SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet2();
              if (bk >= 1 && bk < 5)
              {
                     printf("ATKT IN SECOND SEM\n");
              }
              else if (bk == 0)
              {
                     printf("PASS IN SECOND SEM\n");
              }
              else
              {
                     printf("FAIL IN SECOND SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet2();
                     if (bk >= 1 && bk < 5)
                     {
                            printf("ATKT IN SECOND SEM\n");
                     }
                     else if (bk == 0)
                     {
                            printf("PASS IN SECOND SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN SECOND SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet2();
                            if (bk >= 1 && bk < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (bk == 0)
                            {
                                   printf("PASS IN SECOND SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }
       
       if(bk>=1&&bk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(bk>=1&&bk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(bk>=1&&bk<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }

       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- STATICS\n");
       }

       k1 = ak + bk;
       if (k1 >= 5)
       {
              printf("YEAR BACK\n");
       }
       else
       {
              printf("WELCOME TO SECOND YEAR\n");
       }
       printf(".................................................................................\n");

       marksheet3();
       if (ck >= 1 && ck < 5)
       {
              printf("ATKT IN THIRD SEM\n");
       }
       else if (ck == 0)
       {
              printf("PASS IN THIRD SEM\n");
       }
       else
       {
              printf("FAIL IN THIRD SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet3();
              if (ck >= 1 && ck < 5)
              {
                     printf("ATKT IN THIRD SEM\n");
              }
              else if (ck == 0)
              {
                     printf("PASS IN THIRD SEM\n");
              }
              else
              {
                     printf("FAIL IN THIRD SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet3();
                     if (ck >= 1 && ck < 5)
                     {
                            printf("ATKT IN THIRD SEM\n");
                     }
                     else if (ck == 0)
                     {
                            printf("PASS IN THIRD SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN THIRD SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet3();
                            if (ck >= 1 && ck < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (ck == 0)
                            {
                                   printf("PASS IN THIRD SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }

       if(ck>=1&&ck<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ck>=1&&ck<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ck>=1&&ck<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }
       
       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- STATICS\n");
       }
       printf(".................................................................................\n");
       printf("FOURTH SEM DETAILS\n\n");

       marksheet4();
       if (dk >= 1 && dk < 5)
       {
              printf("ATKT IN FOURTH SEM\n");
       }
       else if (dk == 0)
       {
              printf("PASS IN FOURTH SEM\n");
       }
       else
       {
              printf("FAIL IN FOURTH SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet4();
              if (dk >= 1 && dk < 5)
              {
                     printf("ATKT IN FOURTH SEM\n");
              }
              else if (dk == 0)
              {
                     printf("PASS IN FOURTH SEM\n");
              }
              else
              {
                     printf("FAIL IN FOURTH SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet4();
                     if (dk >= 1 && dk < 5)
                     {
                            printf("ATKT IN FOURTH SEM\n");
                     }
                     else if (dk == 0)
                     {
                            printf("PASS IN FOURTH SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN FOURTH SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet4();
                            if (dk >= 1 && dk < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (dk == 0)
                            {
                                   printf("PASS IN FOURTH SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }
       
       if(dk>=1&&dk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(dk>=1&&dk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(dk>=1&&dk<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }

       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- STATICS\n");
       }

       k2 =ck + dk;
       if (k2>= 5)
       {
              printf("YEAR BACK\n");
       }
       else
       {
              printf("WELCOME TO THIRD YEAR\n");
       }
       printf(".................................................................................\n");

       marksheet5();
       if (ek >= 1 && ek < 5)
       {
              printf("ATKT IN FIFTH SEM\n");
       }
       else if (ek == 0)
       {

              printf("PASS IN FIFTH SEM\n");
       }
       else
       {
              printf("FAIL IN FIFTH SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet5();
              if (ek >= 1 && ek < 5)
              {
                     printf("ATKT IN FIFTH SEM\n");
              }
              else if (ek == 0)
              {
                     printf("PASS IN FIFTH SEM\n");
              }
              else
              {
                     printf("FAIL IN FIFTH SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet5();
                     if (ek >= 1 && ek < 5)
                     {
                            printf("ATKT IN FIFTH SEM\n");
                     }
                     else if (ek == 0)
                     {
                            printf("PASS IN FIFTH SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN FIFTH SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet5();
                            if (ek >= 1 && ek < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (ek == 0)
                            {
                                   printf("PASS IN FIFTH SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }
       if(ek>=1&&ek<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ek>=1&&ek<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(ek>=1&&ek<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }

       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- STATICS\n");
       }
       printf(".................................................................................\n");
       printf("SIXTH SEM DETAILS\n\n");

       marksheet6();
       if (fk >= 1 && fk < 5)
       {
              printf("ATKT IN SIXTH SEM\n");
       }
       else if (fk == 0)
       {
              printf("PASS IN SIXTH SEM\n");
       }
       else
       {
              printf("FAIL IN SIXTH SEM\n");
              printf("REPEAT THIS SEMESTER\n\n");
              marksheet6();
              if (fk >= 1 && fk < 5)
              {
                     printf("ATKT IN SIXTH SEM\n");
              }
              else if (fk == 0)
              {
                     printf("PASS IN SIXTH SEM\n");
              }
              else
              {
                     printf("FAIL IN SIXTH SEM\n");
                     printf("REPEAT THIS SEMESTER\n\n");
                     marksheet6();
                     if (fk >= 1 && fk < 5)
                     {
                            printf("ATKT IN SIXTH SEM\n");
                     }
                     else if (fk == 0)
                     {
                            printf("PASS IN SIXTH SEM\n");
                     }
                     else
                     {
                            printf("FAIL IN SIXTH SEM\n");
                            printf("REPEAT THIS SEMESTER\n\n");
                            marksheet6();
                            if (fk >= 1 && fk < 5)
                            {
                                   printf("YEAR BACK\n");
                            }
                            else if (fk == 0)
                            {
                                   printf("PASS IN SIXTH SEM\n");
                            }
                            else
                                   printf("YEAR BACK\n");
                     }
              }
       }
       
       if(fk>=1&&fk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(fk>=1&&fk<5){
         printf("REPEAT THIS SEMESTER\n\n");
         marksheet1();
       }
       if(fk>=1&&fk<5){
         printf("YEAR BACK\n\n");
         marksheet1();
       }

       if ((t_hindi < 17 && t_hindi <= 50) && (i_hindi < 10 && i_hindi <= 25))
       {
              printf("YOU HAVE ATKT IN :- HINDI\n");
       }

       if ((t_english < 17 && t_english <= 50) && (i_english < 10 && i_english <= 25))
       {
              printf("YOU HAVE ATKT IN :- ENGLISH \n");
       }
       if ((t_physics < 17 && t_physics <= 50) && (i_physics < 10 && i_physics <= 25))
       {
              printf("YOU HAVE ATKT IN :- PHYSICS \n");
       }
       if ((t_c < 17 && t_c <= 50) && (p_c < 10 && p_c <= 25))
       {
              printf("YOU HAVE ATKT IN :- C\n");
       }
       if ((t_math < 17 && t_math <= 50) && (i_math < 10 && i_math <= 25))
       {
              printf("YOU HAVE ATKT IN :- MATHS\n");
       }
       if ((t_statics < 17 && t_statics <= 50) && (i_statics < 10 && i_statics <= 25))
       {
              printf("YOU HAVE ATKT IN :- P&P MANAGEMENT\n");
       }

       k3 = ek + fk;
       if (k3 >= 5)
       {
              printf("YEAR BACK\n");
       }
       else
       {
              printf("YOUR GRADUATION IS COMPLETED\n");
       }
       printf(".................................................................................\n");

       return 0;
}
