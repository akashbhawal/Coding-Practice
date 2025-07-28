#include<iostream>
using namespace std;

int maximum(int *str,int size)
{
	int i=0;
	int Max=str[0];
	for(i=0;i<size;i++)
	{
		if(str[i]>Max)
		{
			Max=str[i];
		}
	}
	return Max;
}
int main()
{
	int Arr[]={10,20,30,40,50};
	int Ret=0;

	Ret=maximum(Arr,5);
	cout<<"maximum is:"<<Ret<<endl;
	return 0;
}