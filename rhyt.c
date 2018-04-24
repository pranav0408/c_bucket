#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i,j,c=1;
    scanf("%i", &n);
    int land[n][n];
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            land[i][j]=0;
    }
    int m;
    scanf("%i", &m);
    int x;
    int y;
    int w;
    for(int a0 = 0; a0 < m; a0++)
    {

        scanf("%i %i %i", &x, &y, &w);
        land[x][y]=w;
        --w;
      while(w>0)
        {x--;y--;
        for(i=x;i<=x+(2*c)&&i<n;i++)
        {
            for(j=y;j<=y+(2*c)&&j<n;j++)
            { /*printf("%d ",i);
              printf("%d ",j);
              printf("\n");
              printf("%d",w);
              printf("\n");*/

             if(i<0||j<0||i>n||j>n)
                continue;

             else if(i!=x+(2*c)&&i!=x)
               {
                    if((j==y||j==y+(2*c)))
                    land[i][j]=land[i][j]+w;

               }
             else if(i==x||i==x+(2*c))
                {
                    land[i][j]=land[i][j]+w;

               }

        }
        }w--;c++;
    }
    c=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d  ",land[i][j]);
        printf("\n");
    }
    return 0;
}
