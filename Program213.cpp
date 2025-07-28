#include<iostream>
using namespace std;

template<class T>
T maximum(T *str,int size)
{
	int i=0;
	T Max=str[0];
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
	int iRet=maximum(Arr,5);
	cout<<"maximum is:"<<iRet<<endl;


	float Crr[]={10.5,20.6,30.1,40.5,50.9};
	float fRet=maximum(Crr,5);
	cout<<"maximum is:"<<fRet<<endl;
	return 0;

	return 0;
}