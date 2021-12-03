#include<stdio.h>
void read_arr(int a[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
      for(j=1;j<=col;j++)
      {
         printf("Enter Element %d %d :",i,j);
         scanf("%d",&a[i][j]);
      }
    }
}

void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
      for(j=1;j<=col;j++)
      {
        m3[i][j] =  (m1[i][j] + m2[i][j]);
      }
    }
}

void print_arr(int m[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
      {
        for(j=1;j<=col;j++)
         {
            printf("%d",m[i][j]);
         }
        printf("\n");
      }
}

 int main()
{
    int m1[10][10],m2[10][10],m3[10][10],row,col;
    printf("Enter number of rows :");
    scanf("%d",&row);
    printf("Enter number of colomns :");
    scanf("%d",&col);
    read_arr(m1,row,col);
    read_arr(m2,row,col);
    add_arr(m1,m2,m3,row,col);
    print_arr(m3,row,col);
}
/*#include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,m,n;
printf("Enter m & n:");
scanf("%d %d",&m,&n);
printf("Enter 1 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("\nEnter 2 matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\nAddition Matrix:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}
printf("\n");
}
}*/

