
//Program to convert farenheit to celcius:-

#include<stdio.h>
int main()
{
    float cel_temp, far_temp;
    printf("Enter the value of temperature in farenheit:\n");
    scanf("%f", &far_temp);
    cel_temp=((far_temp-32)*(0.55556));
    printf("The value of temperature in celcius is %f\n", cel_temp);
    return 0;
}
