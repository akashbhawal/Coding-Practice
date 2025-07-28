import java.lang.*;
import java.util.*;
import java.io.*;

class Program285
{
	public static void main(String[] args) 
	{
		try
		{
			Scanner sobj=new Scanner(System.in);

			System.out.println("Enter file name");
			String Filename=sobj.nextLine();

			File file=new File(Filename);
			boolean bobj=file.createNewFile();

			if(file==null)
			{
				System.out.println("Unable to open");
			}
			else
			{
				System.out.println("File opened");
			}

			System.out.println(Filename);
		}
	}
}