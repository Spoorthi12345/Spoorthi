

import java.util.Scanner;

public class QuadRoot {

    public static void main(String[] args) {
	int a,b,c,res;
    float root1, root2, disc;
    System.out.println("Enter values of a,b,c");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        disc=(b*b)-(4*a*c);
        if(disc>0)
            res=1;
        else if(disc<0)
            res=-1;
        else
            res=0;
        switch (res)
        {
            case 1:System.out.println("Roots are equal");
            root1=((-1*b)+(float)(Math.sqrt(disc)))/(2*a);
            root2=((-1*b)-(float)(Math.sqrt(disc)))/(2*a);
            System.out.println("Root1: "+ root1 +"\n Root2: "+root2 );
            break;
            case -1:System.out.println("Roots are imaginary");
            disc=(-1)*disc;
            float r1=(-b)/(2*a);
            root1=((float) (Math.sqrt(disc)))/(2*a);
            System.out.println("Roots are: "+r1+"+i"+root1);
            System.out.println(r1+"-i"+root1);
            break;
            case 0:System.out.println("Roots are equal");
            root1=root2=(-b)/(2*a);
            System.out.println("Roots are: "+root1+" "+root2);
            break;

        }
    }
}
