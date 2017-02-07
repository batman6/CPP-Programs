/*
 * Intro.cpp

 *
 *  Created on: 27-Jul-2016
 *      Author: Monish De
 */
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;

};
class list
{
private:
	node *head;
public:
	list()
	{
		head=NULL;
	}
	void addVal(int newnum)
	{

		node *temp=new node();
		temp->data=newnum;
		temp->next=head;
		head=temp;
	}

    void dispaly()
	{
		node *list;
		while(list)
		{
			cout<<list->data<<" ";
			list=list->next;
		}
		cout<<"\n";
		cout<<"\n";
	}
};
int main()
{
	list obj;
	int num;
	cout<<"Enter number to be entered";
	cin>>num;
	obj.addVal(num);
	obj.addVal(15);
	obj.addVal(11);
	obj.dispaly();
	return 0;
}







