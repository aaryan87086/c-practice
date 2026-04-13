#include <stdio.h>
int main(){
    int i ,n,sum = 0,average;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements in array:" , n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }
    
    printf("Entered array is:");
    for(i=0;i<n;i++){
        printf(" %d " , arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i];    
    }
    printf("\nThe sum of array is: %d" , sum);

    average = sum / n;
    printf("\nThe Average of the array is: %d" , average);
}