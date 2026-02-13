//Program to Write t5he fibonacci Series
#include <stdio.h>
int main()
{
    int n,i;
    int first=0,second=1,next;

    printf("The Number of Terms :");
    scanf("%d" , &n);

    printf("Fibonacci Series :\n");

    for (i=1;i<=n;i++)
    {
    printf("%d" , first);
    next =first+second;
    first=second;
    second=next;
    }
    return 0;
}
