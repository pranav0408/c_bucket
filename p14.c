#include <stdio.h>
int main()
{
    float paise,rupee;
    int choice;
    printf("Press 1 to convert rupee into paise\n");
    printf("Press 2 to convert paise into rupee\n");
    scanf("%d",&choice);
    if(choice==1)
    {
    printf("Enter amount in rupees\n");
    scanf("%f",&rupee);
    printf("Equivalent amount in paise is %f",rupee*100);
    }
    else if(choice==2)
    {
    printf("Enter amount in paise\n");
    scanf("%f",&paise);
    printf("Entered amount is equal to %d Rupee and ",(int)paise/100);
    paise = (int)paise % 100;
    printf("%d Paise\n",(int)paise);
    }
    return 0;
}
