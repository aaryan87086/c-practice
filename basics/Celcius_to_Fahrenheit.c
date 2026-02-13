//Program to change celcius into farnheit
#include <stdio.h>
int main()
{
    float c,f;

    printf("Enter the cecius here :");
    scanf("%f" , &c);


    printf("The value of celcius in Farnehiet is : \n");

    f = (c*1.8) + 32;

    printf("%f" , f);


    return 0;
}
