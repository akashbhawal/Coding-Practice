#include<iostream>
using namespace std;

template<class T>
int Addition(T A,T B)
{
	T Ans;
	Ans=A+B;
	return Ans;
}
int main()
{
	int No1=11,No2=21;
	int Ret=0;
	Ret=Addition(No1,No2);
	cout<<"Addition is:"<<Ret<<endl;

	float fNo1=11.5,fNo2=21.5;
	float Ret=0.0;
	Ret=Addition(fNo1,fNo2);
	cout<<"Addition is:"<<Ret<<endl;

	return 0;
}