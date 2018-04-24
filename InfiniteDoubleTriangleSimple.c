#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
main()
{
    int i,j,k,d=0;
C:
    for(i=1;i<=5;i++)
    {
       for(j=5;j>=i;j--)
           printf(" ");
       A:
       for(j=1;j<=i;j++)
             printf("* ");
        if(d==1)
                goto B;
       if(d==0)
       {
           for(k=1;k<=80-i*2;k++)
            printf(" ");
           d++;
           goto A;
       }
       B:
       d=0;
    }
       delay(1000);
       goto C;
    return 0;
}
