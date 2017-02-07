#include <iostream>
#include <stdio.h>
using namespace std;
class shape
{
private:
	double length,breadth;
	double area;
public:
	void get_data()
	{
		cout<<"Enter sides"<<endl;
		cin>>length>>breadth;
	}
	void display()
	{
		cout<<"Area of :";
	}
	friend class triangle;
	friend class rectangle;
};
class triangle
{
public:
	virtual void display(shape &s)
	{
	    s.area=(s.length*s.breadth)/2;
		cout<<"\nTriangle is "<<s.area<<endl;
	}
};
class rectangle
{
public:
	virtual void display(shape &s)
	{
	    s.area=s.length*s.breadth;
		cout<<"\nRectangle is "<<s.area;
	}
};
int main()
{
	shape s;
	triangle *t= new triangle;
	rectangle *r=new rectangle;
	s.get_data();
	s.display();
	t->display(s);
	r->display(s);
	return 0;
}
