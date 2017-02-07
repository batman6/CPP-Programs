#include<iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
// Creating a class
class queue
{
    struct node *front,*rear;
public:
    queue()
    {
        front=rear=NULL;
    }
    void enqueue();
    void dequeue();
    void display();
};
// Main function
int main()
{
    queue q;
    int choice;
    cout<<"1:INSERTION"<<endl;
    cout<<"2:DELETION"<<endl;
    cout<<"3:DISPLAY"<<endl;
    cout<<"4:EXIT"<<endl;
    while(1)
    {
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}
void queue::enqueue()
{
    int value;
    cout<<"Enter the value to be inserted"<<endl;
    cin>>value;
    struct node *newnode;
    newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    if(front==NULL)
    {
    front=newnode;
    rear = newnode;
    }
    else
    {
    rear->next=newnode;
    rear=newnode;
    }
}
void queue::dequeue()
{
    if(front==NULL)
        {
            cout<<"EMPTY!!"<<endl;
        }
            struct node *temp;
            temp=front;
            front=front->next;
            cout<<"Deleted Element is "<<temp->data<<endl;
            delete temp;
}
void queue::display()
{
    struct node *temp=front;
    if(front==NULL)
        cout<<"EMPTY!!"<<endl;
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
}
