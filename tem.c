#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  printf("\n==================================================\n");
  printf("\n==================================================\n");
  FILE * p;
  p=fopen("2Basic_Syntax.txt","r");
  printf("\nDisplay\n");
 char ch[99];

  while(!feof(p))
   { fgets(ch, 99,(FILE*) p);
    printf("%s",ch);
}
printf("\n==================================================\n");
printf("\n==================================================\n");
fclose(p);
printf("\n\n\nEnter 1 to read next file\n\n\n");
int i;
scanf("%d",&i);
p=fopen("1Program_Structure.txt","r");
printf("\n==================================================\n");
printf("\n==================================================\n");

while(!feof(p))
 { fgets(ch, 99,(FILE*) p);
  printf("%s",ch);
}
printf("\n==================================================\n");
printf("\n==================================================\n");
fclose(p);
printf("\n\n\nEnter 1 to read next file\n\n\n");

scanf("%d",&i);
p=fopen("3Data_Types.txt","r");
printf("\n==================================================\n");
printf("\n==================================================\n");

while(!feof(p))
 { fgets(ch, 99,(FILE*) p);
  printf("%s",ch);
}
printf("\n==================================================\n");
printf("\n==================================================\n");
fclose(p);
}
