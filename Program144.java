import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];

	public ArrayX(int iNo)
	{
		Arr=new int[iNo];
	}

	public void Accept()
	{
		int iCnt=0;

		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter values:");

		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt=0;
		{
			System.out.println("Enter array elements:");
		}
	}

	public int Summation()
	{
		int iSum = 0, iCnt = 0;

            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
	}
}

class program144
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter thr value for constructor");
		iLength=sobj.next.Int();

		ArrayX obj=new ArrayX(iLength);

		obj.Accept();
		obj.Display();

		iRet=obj.Summation();
		System.out.println("Summation is:"+iRet);

		obj=null;
	}
}