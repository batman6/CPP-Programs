#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	node *next;
	node *prev;
};
node *start;
void create(int newnum)
    {
        node *s,*temp;
        temp=new(struct node);
        temp->data=newnum;
        temp->next=NULL;
        if(start==NULL)
        {
            temp->prev=NULL;
            start=temp;
        }
        else
        {
            s=start;
            while(s->next!=NULL)
            {
                s=s->next;
                s->next=temp;
                temp->prev=s;
            }
        }

    }
void addafter(int newnum, int pos)
{
    if (start == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *temp, *q;
    int i;
    q = start;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"There are less than ";
            cout<<pos<<" elements."<<endl;
            return;
        }
    }
    temp = new(struct node);
    temp->data= newnum;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
    cout<<"Element Inserted"<<endl;
}
void addbegin(int newnum)
{
    if (start == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->data = newnum;
    temp->next = start;
    start->prev = temp;
    start = temp;
    cout<<"Element Inserted"<<endl;
}
void addmiddle(int newnum,int pos)
{
    if (start=NULL)
    {
        cout<<"First Create the list";
        return;
    }
    struct node *temp,*q;
    for(int i=0;i<pos;i++)
    {
        q=q->next;
        if(q==NULL)
        {
            cout<<"There are Less than ";
            cout<<pos<<"Elements"<<endl;
            return;
        }
    }
    temp=new(struct node);
    temp->data=newnum;
    if(q->next==NULL)
    {
        q->next==temp;
        temp->next=NULL;
        temp->prev=q;
    }
    else
    {
        temp->next=q->next;
        temp->next->prev=temp;
        q->next=temp;
        temp->prev=q;
    }
    cout<<"Element Inserted"<<endl;
}
void del(int newnum)
    {
        struct node *temp2,*q=start,*p,*n;
        //first element delete
        if(start->data==newnum)
        {
            q=start;
            start=start->next;
            start->prev= NULL;
            delete q;
            cout<<"Element Deleted"<<endl;
            return;
        }
        else
        {
            while((q->data!=newnum)&&(q!=NULL))
            {
                q=q->next;
            }
            p=q->prev;
            n=q->next;
            p->next=n;
            n->prev=p;
            delete q;
        }

}
void display()
{
    struct node *q;
    if (start == NULL)
    {
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    q = start;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
        cout<<q->data<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int choice, element, position;

        cout<<"Enter Your Choice"<<endl;
        cout<<"1.Create Node"<<endl;
        cout<<"2.Add at begining"<<endl;
        cout<<"3.Add after position"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Quit"<<endl;
         while (1)
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the elements: ";
            cin>>element;
            create(element);
            break;
        case 2:
            cout<<"Enter the elements";
            cin>>element;
            addbegin(element);
            break;
        case 3:
            cout<<"Enter the elements and position ";
            cin>>element>>position;
            addafter(element,position);
            break;
        case 4:
            cout<<"Enter the elements: ";
            cin>>element;
            del(element);
            break;
        case 5:
            display();
            break;
        case 6:
            cout<<"Have a NICE DAY"<<endl;
            exit(1);
        default:
            cout<<"Please choose again";
        }
    }
    return 0;
}



