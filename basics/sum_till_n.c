#include <stdio.h>
int main()
{
    int n , i = 1, sum = 0 ;
    printf("Enter the Number :");
    scanf("%d" , &n);
    while (i <= n){
        sum = sum + i ;
        i++;}

    printf("The sum of numbers are %d" , sum);

}