#include <stdio.h>
int main()
{
    float far,celc;
    printf("Enter temperature in fahrenheit\n");
    scanf("%far",&far);
    celc=(far-32)*5/9;
    printf("Equivalent celcius temp is = %f\n",celc);
    return 0;
}

