#include<stdio.h>
int main()
{

   int i=0;
   scanf("%d",&i);
   switch(i)
   {

    case 1: printf("Hello");
            goto A;
            break;
    case 2:
         A:
            printf("\nBye\n");
            break;
   }
return 0;
}
