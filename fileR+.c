#include<stdio.h>
int main()
{
  FILE *p;
  char s[40];
  p=fopen("r+.txt","r+");
  if(p==NULL)
    printf("file not created.\n");
    else
      {
        printf("File created.\n");
        gets(s);
        fprintf(p,"%s",s);
      }
      printf("Pointer is at %d\n",ftell(p));
  rewind(p);
  if(p==NULL)
    printf("File not created\n");
    else
      {
        printf("File found.\n");
        fgets(s,40,p);
        printf("%s\n",s);
      }
      fclose(p);
      return 0;
}
