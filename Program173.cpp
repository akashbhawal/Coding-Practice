
#include<iostream>
using namespace std;

int StrLen (char *str)
{
	int iCnt=0;

	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
		iCnt++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;

	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	iRet=StrLen(Arr);
	cout<<"STringLength is:"<<iRet<<endl;

	return 0;
}
