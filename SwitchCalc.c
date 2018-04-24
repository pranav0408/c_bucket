#include<stdio.h>
#include<math.h>
int main()
{
   int a,b;
   char ch;
   printf("Enter '+' to do operation\n");
   printf("Enter '-' to do subtraction\n");
   printf("Enter '*' to multiply\n");
   printf("Enter '/' to divide\n");
   scanf("%c",&ch);
   switch(ch)
   {
   case '+':
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Result is %d",a+b);
    break;
   case '-':
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Result is %d",a-b);
    break;
   case '*':
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Result is %d",a*b);
    break;
   case '/':
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Result is %d",a/b);
    break;
   }
return 0;
}
