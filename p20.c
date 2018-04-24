#include <stdio.h>
int greater(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int smaller(int x,int y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five students out of 100\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    float avg;
    avg=(m1+m2+m3+m4+m5)/5;
    int gr,sm;
    gr=greater(m1,m2);
    gr=greater(gr,m3);
    gr=greater(gr,m4);
    gr=greater(gr,m5);

    sm=smaller(m1,m2);
    sm=smaller(sm,m3);
    sm=smaller(sm,m4);
    sm=smaller(sm,m5);

    printf("Greatest number = %d\n",gr);
    printf("Smallest number = %d\n",sm);
    printf("Average marks = %f\n",avg);
    return 0;
}
