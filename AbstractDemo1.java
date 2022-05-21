import java.lang.*;

abstract class Demo
{
	public int i,j;
	public Demo()
	{
		System.out.println("Demo Constructor");
	}
	public void fun()	//Concrete
	{
		System.out.println("Demo fun");
	}
	public abstract void gun();	//Abstract	virtual void gun()=0;
}

class Hello extends Demo
{
	public int x,y;
	public Hello()		//Concrete
	{
		System.out.println("Hello Constructor");
	}
	public void sun()		//Concrete
	{
		System.out.println("Hello sun");
	}
	public void gun()		//Concrete
	{
		System.out.println("Hello gun");
	}
}

class AbstractDemo1
{
	public static void main(String arg[])
	{
		Demo dobj; //allowed because it is  reference but not onject creation
//		dobj = new Demo(); Not allowed

		Hello hobj = new Hello();
		hobj.fun();		//Demo fun
		hobj.gun();		//Derived gun()
		hobj.sun();		//Derived sun()
	}
}
	