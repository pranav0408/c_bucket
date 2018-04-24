#include<stdio.h>
void swap(int* x,int* y)
{
    printf("Value of X is %d at %d and Y at %d is %d before swapping\n",*x,x,*y,y);
    printf("\n");
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("After swap\n");
    printf("X=%d at %d\nY=%d at %d\n",*x,x,*y,y);
    printf("\n");

}
void main()
{
    int a,b;
    printf("Enter value of a and b\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After actual swap\n");
    printf("A=%d at %d\nB=%d at %d\n",a,&a,b,&b);
}
