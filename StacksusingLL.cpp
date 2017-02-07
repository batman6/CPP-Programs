#include<iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
class stack
{
public:
    struct node *top;
    stack()
    {
        top=NULL;
    }
    void push()
    {
        struct node *temp;
        int value;
        cout<<"Enter value to be entered\n";
        cin>>value;
        temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(top!=NULL)
        {
            temp->next=top;
        }
        top=temp;
    }
    int pop()
    {
        struct node *temp;
        temp=new node;
        if(top==NULL)
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            temp=top;
            top=top->next;
            free(temp);
            cout<<"Element delete = "<<temp->data<<endl;
        }
    }
    void display()
    {
        struct node *temp=top;
        cout<<"The Stack is "<<endl;
        while(temp!=NULL)
        {
            cout<<"-------"<<endl<<temp->data<<endl<<"-------"<<endl;
            temp=temp->next;
        }
    }
};
int main()
{
    stack obj;
    int choice;
    cout<<"Enter your choice"<<endl;
    cout<<"1.PUSH"<<endl;
    cout<<"2.POP"<<endl;
    cout<<"3.DISPLAY"<<endl;
    cout<<"4.EXIT"<<endl;
    while(1)
        {
            cout<<"Insert choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                obj.push();
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Wrong choice entered"<<endl;
                break;
            }
        }
    return 0;
}
