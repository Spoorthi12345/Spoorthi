/*Develop a C program to copy one string to another string and find its length
without using built in functions:- */

#include<stdio.h>
int main()
{
    char st1[10],st2[10];
    int i=0,count=0;
    printf("Enter the string in st1:\n");
    gets(st1);
    while(st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
    printf("The second string after the operation is:\n");
    puts(st2);
    i=0;
    while(st2[i]!='\0'){
    count++;
    i++;
    }
    printf("The length of the string is %d\n",count);
    return 0;
}
