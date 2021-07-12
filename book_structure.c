// Develop a C program to read and print 3 book details. Also print the book details with the highest price:-

#include<stdio.h>
int main()
{
    struct book
    {
        char title[30];
        char author[30];
        int price;
        int pages;
       char date[20];
    }bk1,bk2,bk3;
    printf("ENTER DETAILS OF BOOK 1:\n");
    printf("Enter the title:\n");
    scanf("%s",bk1.title);

    printf("Enter the name of author:\n");
    scanf("%s",bk1.author);
    printf("Enter the price:\n");
    scanf("%d",&bk1.price);
    printf("Enter the number of pages:\n");
    scanf("%d",&bk1.pages);
    printf("Enter the date of publication:\n");
    scanf("%s",bk1.date);


    printf("ENTER DETAILS OF SECOND BOOK:\n");
    printf("Enter the title:\n");
    scanf("%s",bk2.title);
    printf("Enter the name of author:\n");
    scanf("%s",bk2.author);
    printf("Enter the price:\n");
    scanf("%d",&bk2.price);
    printf("Enter the number of pages:\n");
    scanf("%d",&bk2.pages);
    printf("Enter the date of publication:\n");
    scanf("%s",bk2.date);


   printf("ENTER DETAILS OF THIRD BOOK:\n");
    printf("Enter the title:\n");
    scanf("%s",bk3.title);
    printf("Enter the name of author:\n");
  scanf("%s",bk3.author);
    printf("Enter the price:\n");
    scanf("%d",&bk3.price);
    printf("Enter the number of pages:\n");
    scanf("%d",&bk3.pages);
    printf("Enter the date of publication:\n");
    scanf("%s",bk3.date);


printf("***************************\n");
    if(bk1.price>bk2.price && bk1.price>bk3.price)
    {
        printf("Book 1 has the highest price\n");
        printf("DETAILS OF BOOK 1:\n");
    printf("Title is %s\n",bk1.title);
    printf("Name of author is %s\n",bk1.author);
    printf("Price is %d\n",bk1.price);
    printf("Number of pages is %d\n",bk1.pages);
    printf("Date of publication is %s\n",bk1.date);
    }
    else if(bk2.price>bk1.price && bk2.price>bk3.price)
    {

        printf("Book 2 has the highest price\n");
        printf("DETAILS OF BOOK 2:\n");
    printf("Title is %s\n",bk2.title);
    printf("Name of author is %s\n",bk2.author);
    printf("Price is %d\n",bk2.price);
    printf("Number of pages is %d\n",bk2.pages);
    printf("Date of publication is %s\n",bk2.date);
    }
    else
    {

        printf("Book 3 has the highest price\n");
        printf("DETAILS OF BOOK 3:\n");
    printf("Title is %s\n",bk3.title);
    printf("Name of author is %s\n",bk3.author);
    printf("Price is %d\n",bk3.price);
    printf("Number of pages is %d\n",bk3.pages);
    printf("Date of publication is %s\n",bk3.date);
    }
 return 0;
}
