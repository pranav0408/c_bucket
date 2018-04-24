#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//creating files with custom name
int main()
{
  char command[100];
  printf("Enter file name with extention\n");
  gets(command);
 FILE *p;
 p=fopen(command,"r");
 fclose(p);
 if(p==NULL)
  p=fopen(command,"w");
  fclose(p);
  char edit[]="notepad ";
  char cp[100];
  strcpy(cp,command);
  strcat(edit,command);
  system(edit);
  int i;
  printf("Enter 1 to execute\n");
  scanf("%d",&i);
  char cmd[]="gcc ";
  strcat(cmd,cp);
  system(cmd);
  system("a");
return 0;
}
