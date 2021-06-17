//Transpose of a given matrix:-

#include<stdio.h>
int main()
{
    int i,j,row,col,arr[5][5];
    int trans[5][5]={0};
    printf("Enter the number of rows in the matrix:\n");
    scanf("%d",&row);
     printf("Enter the number of columns in the matrix:\n");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        printf("The %d row elements are:\n",i);
        for(j=0;j<col;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("%d\t",trans[i][j]);
        }
    }
   return 0;
}
