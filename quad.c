
//Write a program to print all the possible roots of a quadratic equation using functions:-
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,dis;
    float real,img;
    printf("Enter the co-efficients of quadratic equation:\n");
    scanf("%d %d %d", &a, &b , &c);
    dis=(float)(b*b-(4*a*c));
    if(dis>0)
    {
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("The roots are real and distinct:\n");
        printf("The roots are %f %f \n",r1,r2);
    }
    else if(dis==0)
    {
        r1=-b/(2*a);
        r2=r1;
        printf("The roots are equal:\n");
        printf("The roots are %f and %f\n", r1, r2);
    }
    else{
        real=(float)-b/(2*a);
        img=sqrt(-dis)/(2*a);
        printf("The first root is %f+%fi\n",real,img);
         printf("The second root is %f-%fi\n",real,img);
    }
    return 0;
}
