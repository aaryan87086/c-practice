#include <stdio.h>
int main()
{
    int a , b;

    printf("Enter First number here :");
    scanf ("%d", &a);

    printf("Enter Second number here :");
    scanf ("%d", &b);
    
    {
         if (a > b)
        printf("Greater Number is = %d" , a );

        else if ( b > a)
        printf("Greater Number is %d" , b);

        else if ( b == a)
        printf("The numbers are equal");

        else 
        printf("Invalid Number");
    }

    return 0;

}