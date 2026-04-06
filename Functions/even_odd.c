#include <stdio.h>
void is_even(int num){
    if (num %2 == 0) {
        printf("Number is even");
    }

    else {
        printf("Number is odd");
    }
}

int main(){

    int n;
    printf("Enter value of num :");
    scanf("%d" , &n);

    is_even(n);

    return 0;

}