#include <stdio.h>

int main()
{   int s,c=0,p=0;
    scanf("%d",&s);
    int arr[s];
    int i,j,k;
    for(i=0;i<s;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<s-2;i++)
    {  for(j=i+1;j<s-1;j++)
       {
        for(k=j+1;k<s;k++)
        {
        if(arr[i]<arr[j]&&arr[j]<arr[k]&&arr[i]<arr[k])
        {
           if(p<(arr[i]*arr[j]*arr[k]))
           {  p=(arr[i]*arr[j]*arr[k]);
             c=1;
           }

       }
    }
}
}
    if(c==0)
    printf("0");
    else
    printf("%d",p);
    return 0;
}
