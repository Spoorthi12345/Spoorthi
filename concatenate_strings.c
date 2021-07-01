/*Implement a C program to concatenate two strings and find length
of resultant string without using built in functions:- */

#include<stdio.h>
int main()
{
    char st1[10],st2[10],new_st[20];
    int i=0,j=0,count=0;
    printf("The first string is:\n");
    gets(st1);
    printf("The second string is:\n");
    gets(st2);
    while(st1[i]!='\0')
    {
        new_st[j]=st1[i];
        i++;
        j++;
    }
    i=0;
    while(st2[i]!='\0')
    {
        new_st[j]=st2[i];
        i++;
        j++;
    }
    new_st[j]='\0';
    printf("The concatenated string is:\n");
    puts(new_st);
    j=0;
    while(new_st[j]!='\0')
    {
        count++;
        j++;
    }
    printf("The length of the concatenated string is %d\n",count);
    return 0;
}
