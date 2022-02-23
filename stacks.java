import java.util.*;
class Stack{

private int tos;
private int stk[];

Stack(int size)
{
tos=-1;
stk=new int[size];
}

void push(int item)
{
if(stk.length-1==tos)
{
System.out.println("Stack overflow\n");
return;
}
else
{
stk[++tos]=item;
}
}

int pop()
{
if(tos<0)
{
System.out.println("Stack underflow\n");
return 0;
}
else
{
return stk[tos--];
}}

}

class StackDemo{
public static void main(String args[])
{
Stack mystack1= new Stack(5);
Stack mystack2= new Stack(10);

for(int i=0;i<5;i++)
{
System.out.println("Enter the " + i+ " element in stack 1");
Scanner sc=new Scanner(System.in);
int item=sc.nextInt();
mystack1.push(item);
}

for(int i=0;i<10;i++)
{
System.out.println("Enter the " + i+ " element in stack 2");
Scanner sc=new Scanner(System.in);
int item=sc.nextInt();
mystack2.push(item);
}

System.out.println("The stack1 elements are");
for(int i=0;i<5;i++)
{
System.out.println("Popped element is :" +" "+mystack1.pop());
}
}
}


