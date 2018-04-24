#include<stdio.h>
int main()
{
    printf("1 to 10 using while\n");
    int a=1;
    while(a<=10)
    {
        printf("%d ",a);
        a++;
    }
    printf("\n");
    printf("\n1 to 10 using do-while\n");
    a=1;
    do
    {
        printf("%d ",a);
        a++;
    }while(a<=10);
    printf("\n");
    printf("\n1 to 10 using for\n");
    for(a=1;a<=10;a++)
        printf("%d ",a);

    return 0;
}

