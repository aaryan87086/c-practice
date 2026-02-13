//Program to check the divisibility of number by 5 and 11 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number here :");
    scanf("%d", n);

    if (n/5==0 && n/11==0)
    {
        printf("The Number is divisible by 5 and 11 ");
    }

    else
    {
        printf("The number is not divisible by 5 and 11");
    }


    return 0;
}
