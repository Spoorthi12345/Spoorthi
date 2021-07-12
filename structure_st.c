//Develop a C program to create student structure, read 2 student details and print details of student with highest marks:-

#include<stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[20];
        char sec[5];
        char dep[10];
        float fees;
        int marks;
    }stud1,stud2;
    printf("The roll number of first student is:\n");
    scanf("%d",&stud1.roll);
    printf("The name of the first student is:\n");
    scanf("%s",stud1.name);
    printf("Enter the section of student 1:\n");
    scanf("%s",stud1.sec);
    printf("Enter the department of student 1:\n");
    scanf("%s",stud1.dep);
    printf("Enter fees of student 1:\n");
    scanf("%f",&stud1.fees);
    printf("Enter the marks obtained by student 1:\n");
    scanf("%d",&stud1.marks);

    printf("The roll number of second student is:\n");
    scanf("%d",&stud2.roll);
    printf("The name of the second student is:\n");
    scanf("%s",stud2.name);
    printf("Enter the section of student 2:\n");
    scanf("%s",stud2.sec);
    printf("Enter the department of student 2:\n");
    scanf("%s",stud2.dep);
    printf("Enter fees of student 2:\n");
    scanf("%f",&stud2.fees);
    printf("Enter the marks obtained by student 2:\n");
    scanf("%d",&stud2.marks);

    printf("******************\n");

if(stud1.marks>stud2.marks)
{
    printf("The highest marks was obtained by student 1\n");
    printf("The details of the student is:\n");
     printf("The roll number of first student is %d\n",stud1.roll);
    printf("The name of the first student is %s\n",stud1.name);
    printf("The section of student 1 is %s\n",stud1.sec);
    printf("The department of student 1 is %s\n",stud1.dep);
    printf("Fees of student 1 is %f\n",stud1.fees);
    printf("The marks obtained by student 1 is %d\n",stud1.marks);
}
else
{
     printf("The highest marks was obtained by student 2\n");
    printf("The details of the student is:\n");
     printf("The roll number of the student is %d\n",stud2.roll);
    printf("The name of the  student is %s\n",stud2.name);
    printf("The section of student 2 is %s\n",stud2.sec);
    printf("The department of student 2 is %s\n",stud2.dep);
    printf("Fees of student 2 is %f\n",stud2.fees);
    printf("The marks obtained by student 2 is %d\n",stud2.marks);
}
    return 0;
}
