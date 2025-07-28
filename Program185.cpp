
#include<iostream>
using namespace std;

void StrConcat(char *source, char *dest)
{
	while(*source!='\0')
	{
		source++;
	}

	while(*dest!='\0')
	{
		*source=*dest;
		source++;
		dest++;
	}
	*source='\0';
}

int main()
{
	char Arr[20];
	char Brr[20]; 
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);

	cout<<"Enter 2nd string"<<endl;
	cin.getline(Brr,20);
	
	StrConcat(Arr,Brr);
	cout<<"Concatinated String:"<<Arr<<endl;

	return 0;
}
