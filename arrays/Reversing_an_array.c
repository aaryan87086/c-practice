#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of elements :");
    scanf("%d" , &n);

    int arr[n];

    for(i=0 ; i<n; i++){
        printf("Enter %d elements :" , i+1);
        scanf("%d" , &arr[i]);
    }

    printf("\n Entered array : ");
    for(i=0; i<n; i++){
        printf("%d " , arr[i]);
    }

    int start = 0;
    int end = n - 1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp ;

        start++;
        end--;
    }

    printf("\n\n Reversed array : ");
    for(i=0; i<n; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}