#include <stdio.h>

void check(int num)
{
    switch (num % 2)
    {

    case 0:
        printf("Number is Even");
        break;

    case 1:
        printf("Number is Odd");
        break;
    }
}
int main()
{
    int num;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    check(num);
    return 0;
}

