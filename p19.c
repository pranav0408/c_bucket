#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    float degrees,sine,cosine,tangent;
    printf("Enter value of degrees\n");
    scanf("%f",&degrees);
    sine=sin(degrees*PI/180);
    cosine=cos(degrees*PI/180);
    tangent=tan(degrees*PI/180);
    printf("Sine of angle=%f\n",sine);
    printf("Cosine of angle=%f\n",cosine);
    printf("Tangent of angle=%f\n",tangent);
    return 0;
}
