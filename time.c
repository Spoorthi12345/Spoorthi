//Program to convert time(given in hours and minutes) to minutes using functions:-

#include<stdio.h>
int time(int hours, int mins);

int main()
{
    int hours,mins;
    printf("Enter the value of time in hours and minutes:\n");
    scanf("%d %d", &hours, &mins);
    printf("The total time in minutes is %d\n",time(hours,mins));
    return 0;
}

int time(int hours, int mins)
{
    int time;
    time=mins+(hours*60);
    return time;
}
