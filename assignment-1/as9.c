//Q.9......... number divsibel by 5and 11 or not
#include <stdio.h>
int
main ()
{
int a;
printf ("Enter any number to check divisibelity with 5 and 11\n");
scanf ("%d", &a);
if (a % 5 == 0 && a % 11 == 0)
printf ("%d is divisibel by 5 and 11 .", a);
else
printf ("%d is not divisibel by 5 and 11 .", a);
return 0;
}
