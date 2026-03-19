#include <stdio.h>
int main()
{
    int arr[10],n,i,j,temp;
    int low, high , mid , key;
    int found = 0;

    printf("Enter number of elements :");
    scanf("%d",  &n);

    printf("Enter %d elements in array :" , n);
    for(i=0; i<n ; i++) {
        scanf("%d" , &arr[i]);
    }
 
    for(i=0;i < n-1 ; i++){
        for(j = 0; j < n-1-i ; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }

    printf("Sorted array : \n");
    for(i=0; i < n; i++) {
        printf("%d " , arr[i]);

    }

    printf("\nElement to search :");
    scanf("%d" , &key);

    low = 0;
    high = n-1;

    while (low <= high){
        mid = (low+high)/2;

        if (arr[mid] == key){
            printf("Entered element found at position %d" , mid+1 );
            found = 1;
            break ;

        }

        else if (arr[mid] < key ) {
            low = mid + 1 ;

        }
        else {
            high = mid - 1;

        }
    }

    if (found == 0 ) {
        printf("Element not found");
    }
    return 0;
}