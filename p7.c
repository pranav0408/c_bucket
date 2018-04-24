#include <stdio.h>
int main()
{
    float radius,area,volume;
    printf("Enter radius of sphere\n");
    scanf("%f",&radius);
    area=4*3.14*radius*radius;
    volume=(4/3)*3.14*(radius*radius*radius);
    printf("Area of sphere is %f\n",area);
    printf("Volume of sphere is %f\n",volume);
    return 0;
}
