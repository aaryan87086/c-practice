#include <stdio.h>
int main()
{

    int a,square,cube ;

    printf("Enter number :");
    scanf("%d" , &a);

    square=a*a;
    {
        printf("The Square of Number is = %d\n" , square);
    }

    cube = a*a*a;
    {
        printf("Cube of Number is = %d",cube );
    }

    return 0;
}
