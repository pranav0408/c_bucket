#include <stdio.h>
#include<conio.h>
int main()
{
    int n,ch;
    printf("Enter number\n");
    scanf("%d",&n);
    printf("Enter 1 to do bitwise right shift of number by 1\n");
    printf("Enter 2 to do bitwise left shift of number by 1\n");
    scanf("%d",&ch);
    if(ch==1)
        printf("%d",n/2);
    else if(n==2)
        printf("%d",n*2);
    return 0;
}
