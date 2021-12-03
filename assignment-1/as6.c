//Q.6............equilateral triangle or isosceles triangle
#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter all three sides of triangle\n");
scanf("%f%f%f",&a,&b,&c);
if(a==b&&b==c&&c==a)
printf("the given triangle is an equilateral triangle");
else
if(a==b||b==c||c==a)
printf("the given triangle is an isosceles triangle");
else
printf("the given triangle is neither isosceles triangle nor equilateral triangle ");
return 0;
}
