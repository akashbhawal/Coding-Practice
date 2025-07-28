#include<iostream>
using namespace std;

template<class T>
void SwapAddr(T *p,T *q)
{
	T temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int No1=11,No2=21;
	cout<<"Before swapping :"<<No1<<" "<<No2<<endl;

	SwapAddr(&No1,&No2);
	cout<<"After swapping:"<<No1<<" "<<No2<<endl;


	float fNo1=11.0,fNo2=21.0;
	cout<<"Before swapping :"<<fNo1<<" "<<fNo2<<endl;

	SwapAddr(&No1,&No2);
	cout<<"After swapping:"<<fNo1<<" "<<fNo2<<endl;


	char ch1='A',ch2='B';
	cout<<"Before swapping :"<<ch1<<ch2<<endl;

	SwapAddr(&ch1,&ch2);
	cout<<"After swapping:"<<ch1<<ch2<<endl;

	return 0;
}