//Wrte a Program to check weather a number is positive , negative and zero
#include <stdio.h>
int main()
{
    int a ;

    printf("Enter the number :");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("The Number is Positive");
    }

    else if (a < 0)
    {
        printf("The Number is Negative");
    }

    else
    {
        printf("The number is zero");
    }

    return 0;
}