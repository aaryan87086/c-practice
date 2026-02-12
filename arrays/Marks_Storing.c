// Writing a program to store marks of 5 students using array
#include <stdio.h>
int main()
{
    //array syntax = data_type array_name[size];
    int arr[5]={10,20,30,40,50};
    int i;

    for ( i = 0;i < 5;i++)
    {
        printf("%d\n" , arr[i]);
    }

    return 0;
}