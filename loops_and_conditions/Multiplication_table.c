// Multiplication table of a number
#include <stdio.h>
int main()
{
    int num , i;

    printf("Enter the Number :");
    scanf("%d",&num);

    printf("Multiplication table of number %d\n",num);
    for (i = 1;i <= 10 ; i++)
    {
        printf("%d x %d = %d\n" , num,i,num*i);
    }
    return 0;
}