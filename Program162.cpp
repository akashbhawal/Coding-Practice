#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
		private:
			PNODE Head;
			PNODE Tail;
			int CountNode;

		public:
			DoublyCLL();

			void InsertFirst(int);
			void InsertLast(int);
			void InsertAtPos(int,int);

			void DeleteFirst();
			void DeleteLast();
			void DeleteAtPos(int);

			void Display();
			int Count();
};

DoublyCLL::DoublyCLL()
{}

void DoublyCLL::InsertFirst(int No)
{}

void DoublyCLL::InsertLast(int No)
{}

void DoublyCLL::InsertAtPos(int No,int Pos)
{}

void DoublyCLL::DeleteFirst()
{}

void DoublyCLL::DeleteLast()
{}

void DoublyCLL::DeleteAtPos(int Pos)
{}

void DoublyCLL::Display()
{}

int DoublyCLL::Count()
{
	return CountNode;
}

int main()
{
	DoublyCLL obj;
	
	return 0;
}
