#include<stdio.h>
int main()
{
    int i,j,k;
    for( i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            if(k==1)
                printf("/");
            if(k==i)
                printf("\\");
            else if(i==5&&k!=5)
                printf("__");
            else
                printf("  ");
        }
        printf("\n");
    }
}
