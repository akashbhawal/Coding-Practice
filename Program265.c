#include<stdio.h>

void Display(int iNo)
{
	 int i=0;
	 char ch='a';

	for(i=0;i<iNo;i++)
	{
		printf("%c\t",ch);
		ch++;
	}
}
int main()
{
	int iValue=0, iRet=0;

	printf("ENter number\n");
	scanf("%d",&iValue);	

	Display(iValue);
	return 0;
}
