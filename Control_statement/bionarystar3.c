#include <stdio.h>

int main()
{
    int i, j,M, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
          
             M=i%2 ;  
             printf("%d",M);
            
        }
       printf("\n");
    }

    return 0;

}

