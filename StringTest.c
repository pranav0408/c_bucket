#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{

   int ch,i=0,count=0,t[2];
   char s1[10];
   char s2[10];
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
          //strlen
          gets(t);
          gets(s1);

          while(s1[i]!='\0')
            {i++;
             }
          printf("%d",i);
          break;
   case 2:
         //strcpy
         gets(t);

   }
   return 0;
}


