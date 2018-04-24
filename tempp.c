#include<stdio.h>
int x;
int fact(int a)
{
    if(a==0)
        return 1;
    return a*fact(a-1);

}
int main()
{
    printf("Enter the number whose factorial is to be calculated\n");
    scanf("%d",&x);
    int b;
    b=fact(x);
    printf("Factorial of given input is %d\n",b);
}
