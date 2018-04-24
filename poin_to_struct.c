#include <stdio.h>
#include <stdlib.h>
struct info
    {
      char name[20];
      char roll[10];
      int age;
      float perc;
    };
int main()
  {
 struct info s1,*p;
   p = &s1;
   scanf("%s %s",p->name,p->roll);
   scanf("%d %f",&p->age,&p->perc);
   printf("%d",(*p).age);
   printf("\n%s %s %d %.1f",p->name,p->roll,p->age,p->perc);
   return 0;
  }
