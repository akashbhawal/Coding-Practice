#include<stdio.h>

int AddDigit(int iNo)
{
	static int iSum=0;
	int iDigit=0;

	if(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		AddDigit(iNo);
	}
	return iSum;
}

int main()
{
	int iValue=0, iRet=0;
	printf("ENter number\n");
	scanf("%d",&iValue);

	iRet=AddDigit(iValue);
	printf("Addition is:%d",iRet);
	return 0;
}
