#include <stdio.h>
int main()
{
    int i, n , min , max;

    printf("Enter the number of elements :");
    scanf("%d" , &n);

    int arr[n];
    for(i=0 ; i < n ; i++){
        printf("Enter %d elements :" , i+1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i=1 ; i < n; i++){
        if (arr[i] < min) {
            min = arr[i];
        } 

        if (arr[i] > max) {
            max = arr[i];
        }
    }
printf("\nThe minimum number is = %d" , min);
printf("\nThe maximum number is = %d" , max);

return 0;
}