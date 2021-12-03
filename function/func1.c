#include<stdio.h>
 void abc();
 void pqr();
 void xyz();
  void abc()
 {
      printf("abc-called\n");
 }
  void pqr()
 {
      printf("pqr-called\n");
 }
  void xyz()
 {
      printf("xyz-called\n");
 }
 int main()
 {
   printf("main started...\n");
   abc();
   printf("hello\n");
   pqr();
   printf("faizan\n");
   xyz();
   printf("main end...\n");
 return 0;
 }
