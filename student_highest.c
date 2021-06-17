/*Demonstrate reading a 2D array of marks which stores marks of 4 students in 3 subjects
and display the highest marks in each subject:-   */

#include<stdio.h>
int main()
{
    int i,j,max_marks;
    int marks[5][5];
    for(i=0;i<4;i++)
    {
        printf("The marks obtained by %d student:\n",i);
        for(j=0;j<3;j++)
        {
            printf("marks[%d][%d]=",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        max_marks=marks[0][j];
        for(i=0;i<4;i++)
        {
            if(marks[i][j]>max_marks)
            max_marks=marks[i][j];
        }
        printf("The maximum marks in %d subject is %d\n",j,max_marks);
    }
   return 0;
}
