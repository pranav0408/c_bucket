#include<stdio.h>
int main()
{
  int ar1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
  int ar2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
  int mul[3][3];
  int i,j,k,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
      {
        sum=sum+(ar1[j][k]*ar2[k][j]);
      }
      mul[i][j]=sum;
      sum=0;
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
        printf("%d",mul[i][j]);
    printf("\n");
  }
  return 0;
}
