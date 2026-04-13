#include <stdio.h>
int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}
void print_results(int n){
    printf("Square of number is: %d" , square(n));
    printf("\nCube of number is: %d",cube(n));
}

int main()
{   int n;
    printf("Enter the value of n:");
    scanf("%d" , &n);

    print_results(n);
}
