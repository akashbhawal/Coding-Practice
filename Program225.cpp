#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);        // InsertFirst
        void Pop();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next=Head;
    Head=newn;
    Count++;
}

template <class T>
void Stack<T>::Pop()       // Deletefirst
{
    T no;

    if(Count == 0)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }

    if(Count ==1)
    {
            no = Head->data;
            delete Head;
            Head = NULL;
     }
    else
    {
        no = Head -> data;
        struct node<T> *temp = Head;
        Head = Head->next;
        delete temp;
    }
    Count--;
    cout<<"Removed element is : "<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Linked list are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    Stack<char> obj1;

    obj1.Push('a');
    obj1.Push('b');
    obj1.Push('c');
    obj1.Push('d');

    obj1.Display();
    //cout<<"Number of element of Queue:"<<obj1.CountNode()<<endl;

    obj1.Pop();
    obj1.Pop();

    obj1.Display();
    //cout<<"Number of element of Queue:"<<obj1.CountNode()<<endl;

    obj1.Push('z');
    obj1.Pop();
    return 0;
}