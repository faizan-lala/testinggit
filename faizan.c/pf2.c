#include <stdio.h>
int main()
{
int maths,chemistry,physics,hindi,english;
float percentage;
printf("maths\n");
printf("chemistry\n");
printf("physics\n");
printf("hindi\n");
printf("english\n");
scanf("%d%d%d%d%d",&maths,&chemistry,&physics,&hindi,&english);
percentage=(maths+chemistry+physics+hindi+english)/5;
 printf("percentage %f\n",percentage);

return 0;
}
