#include<stdio.h>
void search(int *x, int *y);
int main()
{
    int a[5],n,i;
    int *pa,*pn;
    pa = &a[0];
    pn = &n;
    printf("Enter 5 array element:\n");
    for(i=0;i<5;i++)
    {
      scanf("%d",pa+i);
    }

    printf("Enter element for search:\n");
    scanf("%d",pn);
    search(&a[0],pn);
    return 0;
}

void search (int *x, int *y)
{
    int i, f=0;
    for (i=0;i<5;i++)
    {
       if (*(x+i) == *y)
        {
           f=1;
           break;
        }
        else
           continue;
    }

    if (f==1)
      printf("Found.\n");

    else
      printf("Not found.\n");
}
