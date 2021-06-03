//Develop a C program to print multiples of number n from 1 to 100:-

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number n:\n");
    scanf("%d", &n);
    printf("The multiples of %d is:\n", n);
    while(i<=100)
    {
      printf("%d\n",n*i);
      i++;
    }
    return 0;
}
