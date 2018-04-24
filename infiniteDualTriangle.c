#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
main()
{
    int i,j,k,c=0,d=0;
    char temp[5];
   A:
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            temp[c++]='*';
        for(j=0;j<i;j++)
           printf("%c ",temp[j]);
        for(j=0;j<i;j++)
        {
            if(d==0)
            {
                for(k=1;k<100-i*2;k++)
                    printf("%c",32);
                ++d;
            }
            printf("%c ",temp[j]);
        }
        printf("\n");
        c=0;d=0;
    }
    delay(500);
    goto A;
    return 0;
}
