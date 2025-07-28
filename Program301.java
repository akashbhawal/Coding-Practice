import java.io.*;
import java.util.*;

class Program301
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter string");
		String str=sobj.nextLine();

		char arr[]=str.toCharArry();

		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}
}