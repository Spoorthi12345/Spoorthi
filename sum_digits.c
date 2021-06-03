//Develop a C program to enter a number and calculate sum of the digits:-

#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter the digit:\n");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits is %d\n",sum);
    return 0;
}
