//Q.8.......triangle is valid or not
#include <stdio.h>
int
main ()
{
float a, b, c;
int sum = 0;

printf (" Enter all three angle of triangle\n");
scanf ("%f%f%f", &a, &b, &c);
sum = a + b + c;
if (sum == 180)
printf ("the triangle is valid\n");
else
printf ("the triangle is invalid");
return 0;
}

