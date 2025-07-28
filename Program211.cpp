#include<iostream>
using namespace std;

template<class T>
void Display(T Brr[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<Brr[i]<<endl;
	}
}
int main()
{
	int Arr[]={10,20,30,40,50};
	Display(Arr,5);

	float Crr[]={10.1,20.2,30.3,40.4,50.5};
	Display(Crr,5);
	return 0;
}