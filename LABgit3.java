
import java.util.*;
public class Book {
    String name,author;
    int price,num_pages;
    Book(String name, String author, int price, int num_pages)
    {
        this.name=name;
        this.author=author;
        this.price=price;
        this.num_pages=num_pages;
    }
    public String toString()
    {
        return name+" "+author+" "+price+" "+num_pages;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total number of books:");
        int n=sc.nextInt();
        Book b[]=new Book[n];
        for(int i=0;i<n;i++)
        {
            String name, author;
            int num_pages, price;
            System.out.println("Enter the name of book:");
            name=sc.nextLine();
            System.out.println("Enter author of book:");
            author=sc.next();
            System.out.println("Enter price of book:");
            price=sc.nextInt();
            System.out.println("Enter number of pages:");
            num_pages=sc.nextInt();
            b[i]=new Book(name,author,price,num_pages);
        }
for(int i=0;i<n;i++)
    System.out.println(b[i].toString());
    }
}
