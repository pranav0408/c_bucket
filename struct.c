#include <stdio.h>
#include <stdlib.h>
struct date{
     int dd;
     int mm;
     int yy;
};
struct info
    {
      char name[20];
      char roll[10];
      int age;
     struct date dob;
      float perc;
    }s1,s2[10];
int main()
  {
  /* s1.name="Pranav";
   s1.roll="K17YP24";
   s1.age=20;
   s1.perc=92.5;
   printf("%s\n %s\n %d\n %.1f\n",s1.name,s1.roll,s1.age,s1.perc);
   */
  /*
  scanf("%s",s1.name);
   scanf("%s",s1.roll);
   scanf("%d",&s1.age);
   scanf("%f",&s1.perc);
   printf("\n%s\n%s\n%d\n%.1f",s1.name,s1.roll,s1.age,s1.perc);
*/

   int i,lim;
   printf("\nEnter limit\n");
   scanf("%d",&lim);
   printf("Enter your date of birth\n");
   scanf("%d %d %d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yy);
   for(i=0;i<lim;i++)
   { printf("Enter data in structure %d\n",i+1);
     scanf("%s",s2[i].name);
     scanf("%s",s2[i].roll);
     scanf("%d",&s2[i].age);
     scanf("%f",&s2[i].perc);
     printf("\n");
   }
   printf("your dob is %d|%d|%d\n",s1.dob.dd,s1.dob.mm,s1.dob.yy);
  for(i=0;i<lim;i++)
  {
    printf("%s %s %d %.1f",s2[i].name,s2[i].roll,s2[i].age,s2[i].perc);
    printf("\n");
  }

   return 0;
  }
