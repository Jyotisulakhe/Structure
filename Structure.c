#include<stdio.h>
#include<string.h>

struct student{
 int roll;
 char name[100];
 float cgpa;

};
int main()
{
    struct student s1;
    s1.roll=333;
    s1.cgpa=7.89;
    strcpy(s1.name,"jyoti");

    printf("student nmae=%s\n",s1.name);
    printf("student roll =%d\n",s1.roll);
    printf("student cgpa =%f\n",s1.cgpa);
printf("\n************************************************\n");
    struct student s2;
    s2.roll=334;

    strcpy(s2.name,"Triveni");
    printf("student name %s\n",s2.name);
    printf("student roll %d\n",s2.roll);
    printf("\n*******************************************\n");
    struct student s3;
    s3.roll=335;

    strcpy(s3.name,"shinu");
    printf("student name %s\n",s3.name);
    printf("student roll %d\n",s3.roll);
}
