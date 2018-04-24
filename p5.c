#include <stdio.h>

int main()
{
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    if(n<0)
        printf("Number is negative");
    else
        printf("Number is positive");
    return 0;
}
