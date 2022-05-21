import java.lang.*;
import java.util.*;

class Exception3
{
	public static void main(String arg[])
	{
		int Arr[] ={10,20,30,40,50};
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the index:");
		int index = sobj.nextInt();
		
		System.out.println("Elemet at that index is :"+Arr[index]);
		
	}
}

/*
	try
	{
		//Exception prone code
	}
	catch(ArithmeticException obj)	//Specific catch
	{}
	catch(ArrayOutOBoundsException obj)	//Specific catch
	{}
	catch(Exception obj)	//Generic catch It should be at the end.
	{}		
*/