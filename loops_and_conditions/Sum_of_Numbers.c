//Sum of numbers entered at run time
#include <stdio.h>
int main()
{
    int i , n;
    int num,sum = 0;

    printf("How many numbers do you want to enter :");
    scanf("%d" , &n);

    for (i=1;i<=n;i++)
    {
        printf("Enter number %d :" , i);
        scanf("%d" , &num);
        sum= sum + num;
    }

    printf("sum = %d" , sum);

    return 0;
}