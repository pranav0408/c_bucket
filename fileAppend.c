#include<stdio.h>
int main()
{
  char s[40];
  FILE* p;
  p=fopen("append.txt","a");
  if(p==NULL)
     printf("File not created\n");
     else
     {
       printf("File created\n");
       printf("Enter contents\n");
       gets(s);
       fprintf(p,"%s\n",s);
     }
fclose(p);
int i;
char sc[40];
printf("Enter 1 to show the contents\n");
scanf("%d",i);
p=fopen("append.txt","r");
rewind(p);
if(p==NULL)
     printf("File not created\n");
     else
     {
       char ch[99];

        while(!feof(p))
         { fgets(ch, 99,(FILE*) p);
          printf("%s",ch);
        }
   }
fclose(p);
return 0;
}
