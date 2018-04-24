#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
/*#defile cr(char a[10]) \
        FILE *p;
        p=fopen("a.txt","w");
        printf("a");*/
int main()
{
  FILE *p;
  p=fopen("filehan.c","w");
  if(p==NULL)
  printf("Failed\n");
  else
  printf("Success\n");
  char c[99];
  printf("\n");
  printf("\n");
  printf("------------");
  printf("INSTRUCTIONS");
  printf("------------\n");
  printf("Firstly, Enter your custom program\n");
  printf("Then Enter @ to stop and save file\n");
  printf("\n");
  printf("\n");
  while(c != "@")
  {
    gets(c);
    if(strcmp(c,"@")==0)
    { fputs("//end",p);
      break;
    }
    fprintf(p,"%s\n",c);


  }
  fclose(p);

  p=fopen("filehan.c","r");
  printf("\nDisplay\n");
 char ch[99];

  while(!feof(p))
   { fgets(ch, 99,(FILE*) p);
     if(strcmp(ch,"//end")==0)
       break;
    printf("%s",ch);

  }
  fclose(p);
  int i;
A:
  printf("\nEnter 1 if you want to execute the code entered\n");
  printf("\nEnter 2 if you want to edit the entered code\n");

  scanf("%d",&i);
  if(i==1)
  {

  system("gcc -c filehan.c");
  system("gcc -o exec filehan.o");
  system("exec");
 }
 if(i==2)
 {
   system("notepad filehan.c");
   printf("-------------------------------------");
   printf("-------------------------------------");
goto A;
 }

  return 0;
}
