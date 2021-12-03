#include<stdio.h>
int main(){
int r,c;
int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
int b[3][3]={{70,80,90},{40,50,60},{10,20,30}};
int d[3][3];
printf("Given first matrix....\n");
 for(r=0;r< 3;r++){
   for(c=0;c<3;c++){
     printf("%4d",a[r][c]);
    }
    printf("\n");
  }
  
 printf("Given second matrix....\n");
 for(r=0;r< 3;r++){
   for(c=0;c<3;c++){
     printf("%4d",b[r][c]);
    }
    printf("\n");
  }
  
  printf("after addition....\n");
 for(r=0;r<3;r++){
   for(c=0;c<3;c++){
     d[r][c]=a[r][c]+b[r][c];
     printf("%4d",d[r][c]);
    }
    printf("\n");
  }
  return 0;
 } 
