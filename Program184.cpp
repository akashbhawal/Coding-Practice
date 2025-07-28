
#include<iostream>
using namespace std;

void StrCopy(char *source, char *dest)
{
	while(*source!='\0')
	{
		*dest=*source;
		source++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char Arr[20]; //full
	char Brr[20]; //empty
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	StrCopy(Arr,Brr);
	cout<<"Copied String:"<<Brr<<endl;

	return 0;
}
