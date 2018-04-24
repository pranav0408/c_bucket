#include<stdio.h>
//sum of numbers
int t;
int sum(int s)
{
    if(s==1)
        return 1;
    return (s+sum(s-1));
}
void main()
{
 int a;
 printf("Enter the range of sum\n");
 scanf("%d",&a);
 t=sum(a);
 printf("Result = %d\n",t) ;
}
