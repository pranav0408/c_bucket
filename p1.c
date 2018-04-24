#include <stdio.h>
#include <stdlib.h>

int main()
{
   float radius,area,circ;
   printf("Enter radius of circle\n");
   scanf("%f",&radius);
   area = 3.14*radius*radius;
   circ = 2*3.14*radius;
   printf("Area of circle is %f\n",area);
   printf("Circumference of circle is %f\n",circ);
   return 0;
}
