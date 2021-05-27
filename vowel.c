//Program to print if the entered alphabet is vowel or consonant using switch case:-

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:\n");
    scanf("%c", &ch);
    switch(ch)
    {
    case'a':
    case'A':

    case'e':
    case'E':

    case'i':
    case'I':

    case'o':
    case'O':

    case'u':
    case'U':
        printf("%c is a vowel\n", ch);
        break;
    default:
        printf("The entered alphabet is consonant\n");
    }
    return 0;
}
