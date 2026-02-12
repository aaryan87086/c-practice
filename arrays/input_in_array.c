//Program fo taking input in arra
#include <stdio.h>
int main()
{
    int i, n;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);       

    int arr[n];             

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You Entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}