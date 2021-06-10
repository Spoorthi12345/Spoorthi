//Develop a program to calculate the sum of the squares of the first n odd numbers:-

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+(i*i);
    }
    printf("The sum of squares of the first n odd numbers is %d\n",sum);
    return 0;
}
