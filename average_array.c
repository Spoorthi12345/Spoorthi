//Develop a program to find average of n numbers in an array:-

#include<stdio.h>
int main()
{
    int i,n,sum=0,arr[10];
    float avg;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("The average of the numbers is %f\n",avg);
    return 0;

}
