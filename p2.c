#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0, cube=0,square=0;
   printf("Enter number\n");
   scanf("%d",&n);
   cube=(n*n*n);
   square=(n*n);
   printf("Cube of number is %d\n",cube);
   printf("Square of number is %d\n",square);
   return 0;
}
