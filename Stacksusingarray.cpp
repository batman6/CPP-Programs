#include<iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;
#define MAX 10
int top=-1;
int stack[MAX];
void push()
{
    int value;
    if (top==MAX-1)
    {
        cout<<"Stack is full"<<endl;
        exit (0);
    }
    else
    {
        cout<<"Enter the element"<<endl;
        cin>>value;
        top=top+1;
        stack[top]=value;
    }
}
int pop()
{
    int value;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        exit (0);
    }
    else
    {
        value=stack[top];
        top=top-1;
    }
    return (value);
}
void display()
{
   for(int i=top;i>=0;i--)
   {
       cout<<"-----"<<stack[i]<<endl<<"-----"<<endl;
   }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.EXIT"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            cout<<"The element "<<pop()<<" has been removed"<<endl;
            break;
        case 3:
            display();
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
