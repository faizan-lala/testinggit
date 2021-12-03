//Q.5......even odd without %
#include <stdio.h>
int
main ()
{
int x;
printf ("enter any number");
scanf ("%d", &x);
if ((x & 1) == 0)
printf ("%d is an even number", x);
else
printf ("%d is an odd number", x);
return 0;

}
