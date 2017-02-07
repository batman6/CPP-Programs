#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Publication
{
private:
    string booktitle,tapetitle;
    float price1,price2;
public:
    void getbookdata()
    {
        cout<<"Enter name of book"<<endl;
        getline(cin,booktitle);
        cout<<"Enter Price of book"<<endl;
        cin>>price1;
    }
    void gettapedata()
    {
        cout<<"Enter name of Tape"<<endl;
        cin>>(tapetitle);
        cout<<"Enter price of Tape"<<endl;
        cin>>price2;
    }
    void putbookdata()
    {
        cout<<"\nTitle of the book is - "<<booktitle<<endl;
        cout<<"\nPrice of book is "<<price1<<endl;
    }
    void puttapedata()
    {
        cout<<"\nName of the tape is "<<tapetitle<<endl;
        cout<<"\nPrice of tape is Rs. "<<price2<<endl;
    }
};
class Book:public Publication
{
    int pages;
public:
    void getpages()
    {
        getbookdata();
        cout<<"Enter the total no. of pages"<<endl;
        cin>>pages;
    }
    void display1()
    {
        putbookdata();
        cout<<"No. of Pages is "<<pages<<endl;
    }
};
class Tape:public Publication
{
    float mins;
public:
    void getmins()
    {
        gettapedata();
        cout<<"\nTotal playing time in minutes "<<endl;
        cin>>mins;
    }
    void display2()
    {
        puttapedata();
        cout<<"\nTotal playing time of the tape is "<<mins<<endl;
    }
};
int main()
{
    Book obj1;
    Tape obj2;
    cout<<"\n-------------Enter Book Details-------------"<<endl;
    obj1.getpages();
    cout<<"******************************************************"<<endl;
    obj1.display1();
    cout<<"\n-------------Enter Tape Details-------------"<<endl;
    obj2.getmins();
    cout<<"******************************************************"<<endl;
    obj2.display2();
    return 0;
}
