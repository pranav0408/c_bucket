#include <stdio.h>
int main()
{
    float a,b;
    char ch='\0';
    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter / for division\n");
    printf("Enter * for multiplication\n");
    printf("Enter _ for remainder\n");
    scanf("%c",&ch);
    if(ch=='+')
    {
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Sum = %f",a+b);
    }
    if(ch=='-')
    {
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Difference = %f",a-b);
    }
    if(ch=='/')
    {
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Division = %f",a/b);
    }
    if(ch=='*')
    {
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Multiplication = %f",a*b);
    }
    if(ch=='_')
    {
        printf("Enter two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Remainder = %d",(int)a%(int)b);
    }
    return 0;
}
