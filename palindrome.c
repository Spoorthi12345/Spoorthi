/* Develop a C program to check if the given string is palindrome or not:-  */

#include<stdio.h>
#include<string.h>
int main()
{
    char st[10],org_st[10],temp;
    int i=0,j,k=0,count=0,p;
    printf("Enter the string:\n");
    gets(st);
    while(st[i]!='\0')
    {
     org_st[k]=st[i];
     i++;
     k++;
    }

  i=0;
  j= strlen(st)-1;
  while(j>i)
  {
      temp=st[j];
      st[j]=st[i];
      st[i]=temp;
      i++;
      j--;
  }
  printf("The reversed string is:\n");
  puts(st);
  p=strcmp(org_st,st);
  if(p==0)
    printf("The string is a palindrome\n");
  else
    printf("The string is not a palindrome\n");
  return 0;
}
