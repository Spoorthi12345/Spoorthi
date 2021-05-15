
//Program to find average of 3 numbers using functions:-
#include<stdio.h>
float average(int a,int b, int c);                                      //Function declaration

int main()
{
  int a,b,c;
  printf("Enter the values of a,b,c:\n");
  scanf("%d %d %d",&a ,&b ,&c);
  printf("The average of three numbers is %f\n", average(a,b,c));      //Function call
  return 0;
}

float average(int a,int b, int c)
{
    float result;
    result=(a+b+c)/3;                                                 //Function defination
    return result;
}
