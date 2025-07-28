
#include<iostream>
using namespace std;

int StrCompare(char *source, char *dest)
{
	while((*source!='\0') && (*dest!='\0'))
	{
		if(*source!=*dest)
		{
			break;
		}
		source++;
		dest++;
	}

	if(*source=='\0' && *dest=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];
	char Brr[20]; 
	bool bRet;
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);

	cout<<"Enter 2nd string"<<endl;
	cin.getline(Brr,20);
	
	bRet=StrCompare(Arr,Brr);
	if(bRet==true)
	{
		cout<<" Strings are equal:"<<endl;
	}
	else
	{
		cout<<" Strings are not equal:"<<endl;
	}
	
	return 0;
}
