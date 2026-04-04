#include <stdio.h>
int main()
{
    int sum = 0 , i;
    int arr[5] ;

    printf("Enter elements of array : ");

    for(i=0; i < 5;i++){
        scanf("%d" , &arr[i]);

    }

    for (i=0; i<5; i++){
        sum += arr[i];

    }
    printf("Sum of array is = %d", sum);

    return 0;

}