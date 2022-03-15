
import java.util.*;
class newThread implements Runnable
{
    Thread th;
    int t;
    long time;
    String name;
    
    newThread(String na, int n, long tim)
    {
        name=na;
        time=tim;
        t=n;
        th=new Thread(this, name);
        th.start();
    }
    
    public void run()
    {
        try
        {
            for(int i=t;i>0;i--)
            {
                System.out.println(name);
                Thread.sleep(time);
            }
        }
        catch(InterruptedException e)
        {
            System.out.println(name+" interrupted");
        }
    }
}

class threading{
    public static void main(String args[])
    {
        new newThread("BMS",5,10000 );
        new newThread("CSE dept",5,2000);
    }
}