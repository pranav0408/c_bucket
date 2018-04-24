#include <stdio.h>

int main()
{
    float far,celc;
    printf("Enter temperature in celcius\n");
    scanf("%far",&celc);
    far = (9/5*celc)+32;
    printf("Equivalent fahrenheit temp is = %f",far);
    return 0;
}

