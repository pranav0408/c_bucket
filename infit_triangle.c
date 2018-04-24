#include<stdio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{

    int i,j,k;
A:
    for( i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            {
                printf(" ");

            }
        for(k=1;k<=i;k++)
        {
            if(k==1)
               {
                printf("/");
               //printf("%80c/",32);
               }
            if(k==i)
                {printf("\\");
                 //printf("%40c\\",32);
                }
            else if(i==5&&k!=5)
                {printf("__");
                 //printf("%40c__",32);
                }
            else
                {printf("  ");
                //printf("%40c  ",32);
                }
        }
        printf("\n");
        delay(500);
    }
goto A;

return 0;
}

