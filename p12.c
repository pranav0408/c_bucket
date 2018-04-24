#include <stdio.h>
int main()
{
    float rupee;
    printf("Enter amount in rupees\n");
    scanf("%f",&rupee);
    printf("Equivalent amount in paise is %f",rupee*100);
    return 0;
}
