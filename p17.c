
#include <stdio.h>
#include <math.h>
int main()
{
    float principal,rate,time;
    float ci,si;
    printf("Enter Principal Amount,Rate of Interest and Time in years\n");
    scanf("%f%f%f",&principal,&rate,&time);
    si=(principal*rate*time)/100;
    ci=principal*(pow(1+rate,time));
    printf("Simple Interest = %f\n",si);
    printf("Compound Interest = %f\n",ci);
    return 0;
}
