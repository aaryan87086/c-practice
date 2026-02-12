//Program to find the largest among three numbers
#include <Stdio.h>
int main()
{
    int a,b,c;

    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    printf("Enter third number :");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("Greater Number is %d", a);
    }

    else if (b>c && b>a)
    {
        printf("Greater Number is %d",b);
    }
    else if (c>a && c>b)
    {
        printf("Greater Number is %d" , c);
    }

    return 0;
}