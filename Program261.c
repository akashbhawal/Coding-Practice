#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;

}

int main()
{
	char Arr[20];
	int iRet=0;

	printf("Enter string\n");
	scanf("%s",Arr);

	iRet=CountSmall(Arr);
	printf("Small characters are: %d\n", iRet);
	return 0;
}
