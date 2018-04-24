#include<stdio.h>
//Table of numbers
int main()
{
    int m,n;
    printf("Enter the number upto which table is to be printed\n");
    scanf("%d",&m);
    printf("Enter the end limit of table\n");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            printf("%d ",i*j);
    printf("\n");
    }
    printf("\nEnter 1 to see infinite loop else print any other number\n");
    scanf("%d",&m);
    while(m==1)
    {
        printf("%d",n);
        m++;
        }
 return 0;
}
