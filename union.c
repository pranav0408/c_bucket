#include<stdio.h>
#include<stdlib.h>
union info {
  char name[20];
  int age;
  char address[50];
}u;
void displayy(union info *c)
{
  puts(c->name);
}
void display(union info b)
{
  puts(b.name);
}
int main()
{
  printf("%d\n",sizeof(u));
  gets(u.name);
  display(u);
  displayy(&u);
  //printf("%s",u.name);
  return 0;
}
