//Develop a C program to perform arithmetic operations on 2 integer pointers:-

# include <stdio.h>
int main()
{
    int a,b;
    int *pa, *pb;
    pa=&a;
    pb=&b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",pa,pb);
    printf("The sum of the two numbers %d and %d is %d\n",*pa,*pb,*pa+*pb);
    printf("The difference of the two numbers %d and %d is %d\n",*pa,*pb,*pa-*pb);
    printf("The product of the two numbers %d and %d is %d\n",*pa,*pb,*pa* (*pb));
    printf("The div of the two numbers %d and %d is %d\n",*pa,*pb,*pa  / *pb);
    printf("The rem of the two numbers %d and %d is %d\n",*pa,*pb,*pa % *pb);
    return 0;
}
