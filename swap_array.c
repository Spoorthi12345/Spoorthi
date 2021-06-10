//Develop a C program to interchange the largest and smallest element in the given array:-

#include<stdio.h>
int main()
{
    int arr[10],i,small,large,s_pos=0,l_pos=0,n;
    int temp;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
          large=arr[i];
          l_pos=i;
        }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            s_pos=i;
        }

    }
    temp=large;
    large=small;
    small=temp;
    arr[s_pos]=small;
    arr[l_pos]=large;
    printf("The new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
   return 0;

}
