//Q.7........alphabet or not
#include <stdio.h>
int
main ()
{
char ch;
printf ("Enter any charachter ");
scanf ("%c", &ch);
if (ch >= 65 && ch <= 90)
printf ("charachter is an uper case alphabetical letter");
else if (ch >= 97 && ch <= 122)
printf ("charachter is an lower case alphabetical letter");
else
printf (" Entered charachter is not alphabetical letter ");
return 0;
}
