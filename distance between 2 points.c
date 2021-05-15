
//Program to find the distance between 2 points:-
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("Enter the value of x1 co-ordinate of the first point:\n");
    scanf("%d", &x1);
    printf("Enter the value of y1 co-ordinate of the first point:\n");
    scanf("%d", &y1);
    printf("Enter the value of x2 co-ordinate of the second point:\n");
    scanf("%d", &x2);
    printf("Enter the value of y2 co-ordinate of the second point:\n");
    scanf("%d", &y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between the 2 points is %f\n", distance);
    return 0;
}

