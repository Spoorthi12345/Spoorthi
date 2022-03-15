 package CIE;
import java.util.*;
public class Students{

Scanner sc=new Scanner(System.in);
public int USN;
public int sem;
public String name;

public void accept()
{
System.out.println("ENTER STUDENT NAME:");
name=sc.nextLine();
System.out.println("ENTER STUDENT USN:");
USN=sc.nextInt();
System.out.println("ENTER STUDENT SEM:");
sem=sc.nextInt();
}
public void display()
{
System.out.println("NAME:"+ name);
System.out.println("USN:"+ USN);
System.out.println("SEM:"+ sem);
}
}

package CIE;
import CIE.*;
import java.util.*;

public class internals
{
Scanner sc=new Scanner(System.in);
public int ciem[]=new int[5];
public void get_marksc()
{
System.out.println("Enter CIE marks of students:");
for(int i=0;i<5;i++)
{
System.out.println("Subject" + (i+1));
ciem[i]=sc.nextInt();
}}}

package SEE;
import java.util.*;
public class externals 
{
Scanner sc=new Scanner(System.in);
public int seem[]=new int[5];
public void get_markss()
{
System.out.println("Enter SEE marks of students:");
for(int i=0;i<5;i++)
{
System.out.println("Subject" + (i+1));
seem[i]=sc.nextInt();
}}}

import SEE.*;
import CIE.*;
import java.util.*;

class TotalMarks{

public static void main(String args[])
{
Scanner sc= new Scanner(System.in);
int i,j,n;
System.out.println("Enter number of students");
n=sc.nextInt();
Students s[]=new Students[n];
internals CIE[]=new internals[n];
externals SEE[]=new externals[n];
for(i=0;i<n;i++)
{
System.out.println("Enter details of" +(i+1)+"Student");
s[i]=new Students();
CIE[i]=new internals();
SEE[i]=new externals();
s[i].accept();
CIE[i].get_marksc();
SEE[i].get_markss();
}
System.out.println("Student details");
for(i=0;i<n;i++)
{
s[i].display();
for(j=0;j<5;j++){
System.out.println("The total marks in"+(j+1)+"course is"+(CIE[i].ciem[j]+SEE[i].seem[j]));
}}}}