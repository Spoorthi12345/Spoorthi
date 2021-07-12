/* Demonstrate how to read data from keyboard,write it to a file BMSCE and again read the same data from the BMSCE file
and display it on screen:-       */

#include<stdio.h>
int main()
{
    char st[30];
    FILE *fp;
    printf("Enter the data\n");
    fp=fopen("BMSCE.txt","w");
    fgets(st,30,stdin);
    fclose(fp);
    printf("The entered  data is:\n");
    fp=fopen("BMSCE.txt","r");
    if(fp==NULL)
    {
        printf("Error\n");
        return 0;
    }
    fgets(st,30,fp);
     puts(st);
    fclose(fp);
    return 0;

}
