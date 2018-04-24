#include <stdio.h>
int main()
{
    float a,b;
         printf("Input any two numbers\n");
        scanf("%f%f",&a,&b);
        printf("Sum = %f\n",a+b);

        printf("Difference = %f\n",a-b);

        printf("Division = %f\n",a/b);

        printf("Multiplication = %f\n",a*b);

        printf("Remainder = %d\n",(int)a%(int)b);


    if(a>b)
        printf("%f is greater\n",a);
    else if(b>a)
        printf("%f is greater\n",b);


    return 0;
}

