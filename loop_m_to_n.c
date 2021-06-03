//Develop a C program to print even numbers from m to n:-

#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the starting value m:\n");
    scanf("%d", &m);
    printf("Enter the ending value n:\n");
    scanf("%d", &n);

    printf("The even numbers from %d to %d is:\n",m,n);
    while(m<=n)
    {
        if(m%2==0)
        {
            printf("%d\n",m);
        }
        m++;
    }
    return 0;
}
