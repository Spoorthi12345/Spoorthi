//Illustrate pointers in swapping 2 numbers:-

#include<stdio.h>
int main()
{
    int a,b;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",pa,pb);
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("The value of a and b after swap is %d and %d\n",*pa,*pb);
    return 0;
}
