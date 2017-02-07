#include<iostream>
#include<process.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
int data;
node *next;
}*last;
class circular_list
{
public:
    circular_list()
    {
        last=NULL;
    }
    void create_node(int value)
    {
         struct node *temp;
         temp=new(struct node);
         temp->data=value;
         if(last==NULL)
         {
             last=temp;
             temp->next=last;
         }
         else
         {
             temp->next=last->next;
             last->next=temp;
             last=temp;
         }
    }
    void addbegin_node(int value)
        {
         if(last==NULL)
         {
             cout<<"\nCreate list\n";
             return;
         }
         struct node *temp;
         temp=new(struct node);
         temp->data=value;
         temp->next=last->next;
         last->next=temp;
    }
    void addafter_node(int value,int pos)
    {
        if (last==NULL)
        {
            cout<<"\nCreate List\n";
            return;
        }
        struct node *temp,*s;
        s=last->next;
        for(int i=0;i<pos-1;i++)
        {
            s=s->next;
            if(s==last->next)
            {
                cout<<"There are less than";
                cout<<pos<<" in the list\n";
                return ;
            }
        }
        temp=new(struct node);
        temp->next=s->next;
        temp->data=value;
        s->next=temp;
        //Element inserted in the last
        if(s==last)
        {
            last=temp;
        }
    }
    void del_node(int value)
    {
        struct node *temp,*s;
        s=last->next;
        //If only one element
        if(last->next==last&&last->data==value)
        {
            temp=last;
            last=NULL;
            free(temp);
            return;
        }
        //first element
        if(s->data==value)
        {
            temp=s;
            last->next=s->next;
            free(temp);
            return;
        }
        while(s->data!=value)
        {
            //deletion from middle
            if(s->next->data==value)
            {
                temp=s->next;
                s->next=temp->next;
                free(temp);
                cout<<"Element"<<value;
                cout<<" deleted from the list\n";
                return;
            }
        }
    }
    void display()
    {
        struct node *s;
        if(last==NULL)
        {
            cout<<"List is empty\n";
            return;
        }
        s=last->next;
        cout<<"List is as follow: \n";
        while(s!=last)
        {
            cout<<s->data<<"->";
            s=s->next;
        }
        cout<<s->data<<endl;
    }
};
int main()
{
    int choice,element,position;
    circular_list obj;

    cout<<"Enter your choice as : \n";
    cout<<"\n1.Create\n";
    cout<<"\n2.Insert\n";
    cout<<"\n3.Insert in position\n";
    cout<<"\n4.Delete\n";
    cout<<"\n5.Display\n";
    cout<<"\n6.Exit\n";
    while(1)
    {
    cin>>choice;
    switch(choice)
    {
    case 1:
            cout<<"Enter the element: ";
            cin>>element;
            obj.create_node(element);
            cout<<"\n";
            break;
    case 2:
            cout<<"Enter the element: ";
            cin>>element;
            obj.addbegin_node(element);
            cout<<"\n";
            break;
    case 3:
            cout<<"Enter the element & position ";
            cin>>element>>position;
            obj.addafter_node(element,position);
            cout<<"\n";
            break;
    case 4:
            cout<<"Enter the element: ";
            cin>>element;
            obj.del_node(element);
            cout<<"\n";
            break;
    case 5:
            obj.display();
            break;
    case 6:
            exit(1);
            break;
    default:
            cout<<"\nWrong Choice\n";
    }
    }
    return 0;
}
