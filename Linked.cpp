#include<iostream>
#include<stdlib.h>
#include<new>
using namespace std;
struct node{
int data;
node *next;
};
class list{
private :
    node *head;
public:
    list()
    {
        head=NULL;
    }
    int create_node(int value)
    {
        struct node *temp;
        if(temp==NULL)
            cout<<"Allocate";
        else
        {
            temp->data=value;
            temp->next=NULL;
        }
        return *temp;
    }
    void insert_begin(){
        int value;
        cin>>value;
        struct node *temp,*s;
        temp=create_node(value);
        if(head==NULL)
        {
            head=temp;
            head->next=NULL;
        }
        else
        {
            s=head;
            head=temp;
            head->next=s;
        }
    }
    void insert_end()
    {
        int value;
        cin>>value;
        struct node *temp,*s;
        temp=creat_node(value);
        if(head==NULL)
        {
            temp=head;
            head->next=NULL;
        }
        else{
            s=head;
            while(s->next!=NULL)
            {
                s=s->next;
            }
            temp->next=NULL;
            s->next=temp;
        }
    }
    void del_first(){
        struct node *temp;
        if (head==NULL)
            cout<<"list is empty";
            else{
                temp=head;
                head=temp->next;
                free(temp);
            }
    }
    void del_end(){
    struct node *temp,*s;
    if(head==NULL)
    {
        cout<<"Empty";
    }
    else{
        s=head;
        while(s-next!=NULL)
        {
            temp=s;
            s=s->next;
        }
        temp->next=s->next;
        free(temp);
        }
    }
    void disp()
    {
        struct node *temp=head;
        while(temp->next!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;}

    }

};
int main()
{
    list obj;
    int choice,value;
    cout<<"1.Create\n2.Insert Begin\n3.Insert End\n4.Del Front\n5.Del End\n6.Display\n7.Exit"<<endl;
    while(1){
        cin>>choice;
        switch(choice){
    case 1:
        cout<<"Enter Data"<<endl;
        cin>>value;
        obj.create_node(value);
        break;
    case 2:
        obj.insert_begin();
        break;
    case 3:
        obj.insert_end();
        break;
    case 4:
        obj.del_first();
        break;
    case 5:
        obj.del_end();
        break;
    case 6:
        exit(0);
        break;
    default:
        cout<<"Wrong choice";
        break;
        }
        return 0;
    }
}
