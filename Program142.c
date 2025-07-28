#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iLength)
{
	int iSum=0,iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iCnt=0,iRet=0,iSize=0;
	int *p=NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	p=(int*)malloc(sizeof(int)*iSize);

	printf("Enter values of array:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=Summation(p,iSize);
	printf("Addition is:%d\n",iRet);

	return 0;
}
