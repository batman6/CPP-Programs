#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data,pow;
    struct node *next;
};
struct node *poly1;
struct node *poly2;
struct node *ans;
void insertpoly()
{
    struct node *value;
    if (value==NULL)
        return;
    else
    {
        value->next=NULL;
        if (head==NULL)
        {
            head=value;
            tail=value;
        }
        else
        {
            tail->next=value;
            tail=value;
        }
    }

}

int main()
{
    poly1=malloc(sizeof(struct node));
    poly2=malloc(sizeof(struct node));
    ans=malloc(sizeof(struct node));
    printf("Enter the polynomial 1.");
    printf("Enter Value and power");
    printf("Enter the polynomial 2.");
    printf("Enter Value and power");

}
