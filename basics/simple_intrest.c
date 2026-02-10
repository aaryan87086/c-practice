#include <stdio.h>
int main()
{
    float P,R,T,SI;

    printf("Enter value of P :");
    scanf("%f" , &P);

    printf("Enter value of R :");
    scanf("%f" , &R);

    printf("Enter value of T :");
    scanf("%f" , &T);

    SI =  (P*R*T)/100;

    printf("The Simple intrest is = %f", SI);

    return 0;
}