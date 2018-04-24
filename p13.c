#include <stdio.h>

int main()
{
    float paise;
    printf("Enter amount in paise\n");
    scanf("%f",&paise);
    printf("Entered amount is equal to %d Rupee and ",(int)paise/100);
    paise = (int)paise % 100;
    printf("%d Paise\n",(int)paise);
    return 0;
}
