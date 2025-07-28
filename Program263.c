#include<stdio.h>

int AddDigit(int iNo)
{
	int iSum=0,iDigit=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
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
