#include<iostream>
using namespace std;

void SwapRef(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
int main()
{
	int No1=11,No2=21;
	cout<<"Before swapping :"<<No1<<" "<<No2<<endl;

	SwapRef(No1,No2);
	cout<<"After swapping"<<No1<<No2<<" "<<endl;


	return 0;
}