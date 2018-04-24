#include<stdio.h>
int main()
{
    float grade;
    printf("Enter grades\n");
    scanf("%f",&grade);
    if(grade>=90.0)
        printf("Grade is A\n");
    else if(grade>=80.0&&grade<90.0)
        printf("Grade is B\n");
    else if(grade>=70.0&&grade<80.0)
        printf("Grade is C\n");
    else if(grade>=60.0&&grade<70.0)
        printf("Grade is D\n");
    else
        printf("Grade is not alloted\n");
return 0;
}
