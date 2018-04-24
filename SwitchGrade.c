#include <stdio.h>
#include <conio.h>
int main()
{
 float percent;
 int chck;
 printf("Enter percentile\n");
 scanf("%f",&percent);
 chck=(int)percent/10;
 switch(chck)
 {
 case 9:
    printf("Grade is A");
    break;
 case 8:
    printf("Grade is B");
    break;
 case 7:
    printf("Grade is C");
    break;
 case 6:
    printf("Grade is D");
    break;
 case 5:
    printf("Grade is E");
    break;
 default:
    printf("No grade is given");
    }
return 0;
}
