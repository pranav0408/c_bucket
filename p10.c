#include <stdio.h>
int main()
{
    int choice;
    float far,celc;
    printf("Press 1, if conversion from fahrenheit to celcius is required\n");
    printf("Press 2, if conversion from celcius to fahrenheir is required\n");
    scanf("%d",&choice);

    if(choice==1)
  {
    printf("Enter temperature in fahrenheit\n");
    scanf("%far",&far);
    celc=(far-32)*5/9;
    printf("Equivalent celcius temp is = %f",celc);
  }
  else if (choice==2)
  {
    printf("Enter temperature in celcius\n");
    scanf("%far",&celc);
    far=(9/5*celc)+32;
    printf("Equivalent celcius temp is = %f",celc);
  }
  return 0;
}
