
//Write a program to find area of triangle using functions:-
#include<stdio.h>
#include<math.h>
float area(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The area of the triangle is %f\n",area(a,b,c));
    return 0;
}

float area(int a,int b,int c)
{
    float s,area;
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
