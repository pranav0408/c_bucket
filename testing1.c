#include <stdio.h>
#include <stdlib.h>
void main()
{   int i;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            system("gcc -c gcd.c");
            system("gcc -o ji gcd.o");
            system("ji");
            printf("\n");
        }
    }
}
