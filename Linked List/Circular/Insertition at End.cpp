// Task :
//
// Insertition at end in Circular Linked List

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class list
{
    node *head, *tail;
    public:
        list()
        {
            head = NULL;
            tail = NULL;
        }

        node *create_node(int);
        void insert(int);
        void display();
};

node* list :: create_node(int value)
{
    node *temp = new node;
    temp -> data = value;
    temp -> next = head;
    return temp;
}

void list :: insert(int value)
{
    node *temp;
    temp = create_node(value);
    if(head == NULL)
    {
        head = temp;
        tail = head;
    }
    else
    {
        tail -> next = temp;
        tail = tail -> next;
    }
}

void list :: display()
{
    node *temp = new node;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"  ";
            temp = temp->next;
            if(temp == head)
            {
                break;
            }
        }
        cout<<endl;
    }
}

int main()
{
    list l;
    int n,num;
    cout<<"Enter List Size : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter Number : ";
        cin>>num;
        l.insert(num);
    }

    l.display();

    return 0;
}
