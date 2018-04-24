#include <stdio.h>
int main()
{
 int number;

 printf("Enter number\n");
 scanf("%d",&number);
 if(number%2==0)
    printf("Number is even\n");
 else if (number%2==1)
    printf("Number is odd\n");
 return 0;
}
