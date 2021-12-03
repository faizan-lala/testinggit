
 #include<stdio.h>
int main(){
   int i,j;

	for(i=1;i<=5;i++)
	{

	 for(j=1;j<=i;j++) {

    	 printf("%d",j);

	
	 if(i==3||j==2+i)
	 
	  printf(" ");
	 else
	  printf("\n");

	 
	}
	printf("\n");
       }
	return 0;
}
