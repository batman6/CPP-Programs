#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;
class student
{
    private:

    long int roll;
    string name;
    int year;
    public:

    student()
    {
        cout<<"Object is created"<<endl;
    }
    void getdata()
    {
        cout<<"Enter Name\n";
        getline(cin,name);
        cout<<"Enter Roll No.\n";
        cin>>roll;
        cout<<"Enter Year\n";
        cin>>year;
    }
    void display()
    {

        cout<<"\nRoll No. "<<roll;
        cout<<"\nName "<<name;
        cout<<"\nYear "<<year;
    }
};
main()
{
    student obj[10];
    int n,i;
    /*obj.getdata();
    obj.display();*/
    cout<<"Enter n";
    cin>>n;
    for(i=0;i<n;i++)
    {
    obj[i].getdata();
    }
    for(i=0;i<n;i++)
    {
    obj[i].display();
    }
    return 0;
}

