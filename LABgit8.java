
import java.util.*;
class Gen<T,V>
{
    T ob1;
    V ob2;
    
    Gen(T x, V y)
    {
        ob1=x;
        ob2=y;
    }
    
    T getOb1()
    {
        return ob1;
    }
    V getOb2(){
        return ob2;
    }
    
    void showType()
    {
        System.out.println("The type of T is:"+ ob1.getClass().getName());
        System.out.println("The type of V is:"+ ob2.getClass().getName());
    }
}

class generics
{
    public static void main(String args[])
    {
        Gen<String,Integer>wob;
        wob= new Gen<String,Integer>("BMS",230);
        wob.showType();
        String x=wob.getOb1();
        System.out.println("The value of x is: "+x);
        int y=wob.getOb2();
        System.out.println("The value of y is: "+y);
    }
}