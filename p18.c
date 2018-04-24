#include <stdio.h>
int main()
{
    float acc,vel,time,dist;
    printf("Enter initial velocity and acceleration\n");
    scanf("%f%f",&vel,&acc);
    time=vel/acc;
    dist = vel*time;
    printf("Distance moved is = %f",dist);
    return 0;
}
