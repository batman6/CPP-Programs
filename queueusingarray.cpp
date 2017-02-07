#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;
#define MAX 10
int que[MAX];
int top=-1,rear=-1;
class queue
{
public:
    void enqueue()
    {
        int value;
        cout<<"Enter the value to be inserted"<<endl;
        cin>>value;
        if(rear==MAX-1)
            cout<<"Overflow"<<endl;
        else if(top==-1&&rear==-1)
        {
            top=0;
            rear=0;
            que[rear]=value;
        }
        else
        {
            rear++;
            que[rear]=value;
        }

    }
    void dequeue()
    {
        if(top==rear)
            cout<<"Queue is EMPTY"<<endl;
        else
        {
            cout<<"Deleted element is: "<<que[top]<<endl;;
            top++;
            if(top==rear)
                top=rear=-1;
        }
    }
    void display()
    {
        if(top==-1&&rear==-1)
        {
            cout<<"Queue is EMPTY"<<endl;
        }
        for(int i=top;i<=rear;i++)
        {
            cout<<"\t******"<<endl;
            cout<<"\t  "<<que[i]<<endl;
        }
        cout<<"\t******"<<endl;
    }
};
int main()
{
    queue obj;
    int choice;
    cout<<"Enter your choice as"<<endl;
    cout<<"1.ENQUEUE"<<endl;
    cout<<"2.DEQUEUE"<<endl;
    cout<<"3.DISPLAY"<<endl;
    cout<<"4.EXIT"<<endl;
    while(1)
    {
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            obj.enqueue();
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice, Please Insert again"<<endl;
            break;
        }
    }
}



