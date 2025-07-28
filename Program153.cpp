#include<iostream>
using namespace std;

struct node 
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:              //Charactaristics
		PNODE Head;
		PNODE Tail;

	public:   				//Behavior
		SinglyCLL()
		{
			Head=NULL;
			Tail=NULL;
		}

		void InsertFirst(int no)
		{}
		void InsertLast(int no)
		{}
		void InsertAtPos(int no,int pos)
		{}
		void DeleteFirst()
		{}
		void DeleteLast()
		{}
		void DeleteAtPos(int pos)
		{}
		void Display()
		{}
		int Count()
		{
			return 0;
		}
};

int main()
{
	SinglyCLL obj;

	return 0;
}
