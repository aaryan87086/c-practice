#include <stdio.h>
int main()
{
    int  n = 1, sum = 0;

    while (n<=10)
    
    {
        sum = sum + n;
        n++;
    }

    printf("The Sum of number is %d" , sum);
    return 0;

}