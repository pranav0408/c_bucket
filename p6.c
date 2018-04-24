#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter coefficient of x^2\n");
    scanf("%d",&a);
    printf("Enter coefficient of x\n");
    scanf("%d",&b);
    printf("Enter constant of equation\n");
    scanf("%d",&c);
    int d;
    d = (b*b)- (4*a*c);
    if(d>=0)
        printf("Real roots exists");
    else
        printf("Imaginary roots exists");
    return 0;
}
