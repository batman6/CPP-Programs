#include<iostream>
#include<new>
#include<process.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
class bst
{
    struct node *root;
public:
    bst()
    {
        root=NULL;
    }
    //Insertion of elements inside the tree
    void insert()
    {
        int value;
        cin>>value;
        struct node *p=new node();
        struct node *parent;
        p->data=value;//root value
        p->left=NULL;
        p->right=NULL;
        parent=NULL;
        if(root==NULL)
            root=p;
        else
            {
                struct node *ptr;
                ptr=root;
                while(ptr!=NULL)
                {
                    if(value>ptr->data)
                    {
                        parent=ptr;
                        ptr=ptr->right;
                    }
                    else
                    {
                        parent=ptr;
                        ptr=ptr->left;
                    }
                }
                if(value<parent->data)
                    parent->left=p;//Inserting in the right
                else
                    parent->right=p;//Inserting in the left
            }
    }
    //Search Operation
    void search()
    {
        int value;
        cout<<"Enter element to be searched"<<endl;
        cin>>value;
        struct node *parent;
        parent=NULL;
        struct node *temp;
        temp=root;
        while(temp!=NULL)//traversing
        {
            if(value>temp->data)
            {
                parent=temp;
                temp=temp->right;
            }
            else
            {
                parent=temp;
                temp=temp->left;
            }
        }
        if(value==parent->data)//searching
            cout<<"Number Found"<<endl;
        else
            cout<<"NOT Found"<<endl;
    }
    void preordertrav()
    {
        printpreorder(root);
    }
    void printpreorder(struct node *root)//preorder
    {
        if(root!=NULL)
        {
            cout<<root->data<<" ";
            printpreorder(root->left);//recursion
            printpreorder(root->right);//recursion
        }
        //cout<<endl;
    }
    void postordertrav()
    {
        printpostorder(root);
    }
    void printpostorder(struct node *root)//postorder
    {
        if(root!=NULL)
        {
            printpostorder(root->left);//recursion
            printpostorder(root->right);//recursion
            cout<<root->data<<" ";
        }
        //cout<<endl;
    }
    void inordertrav()
    {
        printinorder(root);
    }
    void printinorder(struct node *root)//inorder
    {
        if(root!=NULL)
        {
            printinorder(root->left);//recursion
            cout<<root->data<<" ";
            printinorder(root->right);//recursion
        }
        //cout<<endl;
    }
};
//Main Function
int main()
{
    int n;
    bst obj;//class object
    struct node *root;
    int value,choice;
    cout<<"Enter your choice as\n1.INSERT\n2.INORDER\n3.POSTORDER\n4.PREORDER\n5.SEARCH\n6.EXIT\n";
    while(1)
    {
        cout<<"Choice:: ";
        cin>>choice;
        switch(choice)//switch statements
        {
        case 1:
            cout<<"ENTER how many elements to be inserted";
            cin>>n;
            cout<<"Enter the value to be inserted"<<endl;
            for(int i=0;i<n;i++)
            {
                obj.insert();
            }
            break;
        case 2:
            obj.inordertrav();
            break;
        case 3:
            obj.postordertrav();
            break;
        case 4:
            obj.preordertrav();
            break;
        case 5:
            obj.search();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"WRONG CHOICE"<<endl;
            break;
        }
    }
    return 0;
}
