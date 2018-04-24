#include<stdio.h>

    int main()
    {
       char arr[8][8];
       int c=0;
       int len;
       scanf("%d",&len);
       char temp[len];
       char temp2;
       gets(temp);
       while(c<8)
       {
           gets(temp2);
           arr=temp2;
       }
       puts(arr);
       return 0;
    }
