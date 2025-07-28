
#include<iostream>
using namespace std;

void ConvertLetter(char *str)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str = *str-32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	ConvertLetter(Arr);
	cout<<"String in capital case:"<<Arr<<endl;

	return 0;
}
