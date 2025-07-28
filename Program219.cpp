#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
public:
	struct node<T> *Head;
	int Count;

	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T no, T pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(T no, T pos);
	void Display();
	int CountNode();
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head=NULL;
	Count=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn=NULL;
	newn=new node<T>;

	newn->data=no;
	newn->next=NULL;

	if(Head==NULL)
	{
		Head=NULL;
	}
	else
	{
		newn->next=Head;
		Head=newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn=NULL;
	newn=new node<T>;

	newn->data=no;
	newn->next=NULL;

	if(Head==NULL)
	{
		Head=NULL;
	}
	else
	{
		struct node<T>*temp=Head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	Count++;
}

template<class T>
void SinglyLL:: InsertAtPos(T no,T pos)
{
	T size = 0, iCnt = 0;
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size+1)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else        // Logic
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp->next = newn;
    }
}

template<class T>
void SinglyLL:: DeleteFirst()
{
	 struct node *temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else        // LL contains atleast one node
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}


template<class T>
void SinglyLL:: DeleteLast()
{

    struct node *temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else if((*head) -> next == NULL) // LL contains one node
    {
            free(*head);
            *head = NULL;
    }
    else    // LL contains more than one node
    {
            temp = *head;
           while(temp->next->next != NULL)
           {
                temp = temp -> next;
           }

           free(temp->next);
           temp->next = NULL;
    }
}


template<class T>
void SinglyLL:: DeleteAtPos(T no, T pos)
{
	T size = 0, iCnt = 0;
    struct node *temp = NULL;
    struct node *tempdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size)))
    {
        cout<<"Position is invalid\n"<<endl;
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else        // Logic
    {
        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Elements from LL are:"<<endl;
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}


int main()
{
	SinglyLL<int>obj1;
	SinglyLL<float>obj2;

	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertLast(51);
	obj1.InsertLast(101);
	obj1.Display();
	cout<<"Number of nodes are:"<<obj1.CountNode()<<endl;

	obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.22);
	obj2.InsertLast(51.23);
	obj2.InsertLast(101.14);
	obj2.Display();
	cout<<"Number of nodes are:"<<obj2.CountNode()<<endl;



	return 0;
}