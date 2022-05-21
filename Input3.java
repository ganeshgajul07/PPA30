import java.io.*;

class Input3
{
	public static void main(String arg[]) throws IOException
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		
		System.out.println("Enter the string");
		String str = bobj.readLine();
		
		System.out.println("Enter the integer");
		int no = Integer.parseInt(bobj.readLine());
		
		System.out.println("Enter the float");
		float f = Float.parseFloat(bobj.readLine());
		
		System.out.println("Enter the double");
		double d = Double.parseDouble(bobj.readLine());
		
		System.out.println("Enter string is:"+str);
		System.out.println("Enter string is:"+no);
		System.out.println("Enter string is:"+f);
		System.out.println("Enter string is:"+d);
	}
}