//Addition of two matrices:-

#include<stdio.h>
int main()
{
    int i,j,row1,row2,col1,col2,arr1[5][5],arr2[5][5];
    int sum[5][5]={0};
    printf("Enter the number of rows in the matrix 1 and 2:\n");
    scanf("%d %d",&row1, &row2);
     printf("Enter the number of columns in the matrix 1 and 2:\n");
    scanf("%d %d",&col1, &col2);
    if(row1!=row2 || col1!=col2)
    {
        printf("The number of rows and columns of the two arrays should be equal\n");
        return 0;
    }
    printf("Enter values of first matrix:\n");
    for(i=0;i<row1;i++)
    {
        printf("The elements in %d row is:\n",i);
        for(j=0;j<col1;j++)
        {
            printf("arr1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
      printf("Enter values of second matrix:\n");
    for(i=0;i<row2;i++)
    {
        printf("The elements in %d row is:\n",i);
        for(j=0;j<col2;j++)
        {
            printf("arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    printf("The resultant matrix is:\n");
    for(i=0;i<row1;i++)
    {
        printf("\n");
        for(j=0;j<col1;j++)
            printf("%d\t",sum[i][j]);
    }
    return 0;
}
