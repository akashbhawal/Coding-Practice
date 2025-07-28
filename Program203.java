//Accept number and position template

import java.lang.*;
import java.util.*;

//0000 0000 0000 0000 0010 0000 0000 0000
//	0 	 0    0    0     2    0    0    0

class Bitwise
{
	//logic
}

class Program202
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter number");
		int value=sobj.nextInt();

		System.out.println("Enter position");
		int pos=sobj.nextInt();

		Bitwise bobj=new Bitwise();
		int iRet=bobj.ToggleBit(value,pos);
		System.out.println("Updated number is:"+iRet);

	}
}