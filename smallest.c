//Program to print the smallest number of the 3 numbers:-

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three distinct numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b&&a<c)
    {
        printf("%d is smallest\n", a);
    }
    else if(b<a&&b<c)
    {
        printf("%d is smallest\n",b);
    }
    else if(c<a&&c<b)
    {
        printf("%d is smallest\n",c);
    }
return 0;
}
