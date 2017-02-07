
// Unary operator overloading

#include<iostream>
using namespace std;

class complex
{
     int a,b;
        public:
        void getvalue()
       {
                 cout<<"Enter the Two Numbers:";
                 cin>>a>>b;
       }
       // void increment()
        void operator++()
      {
                 //a=++a;
                 //b=++b;
                 cout<<" Hello"<<endl;
       }
      //void decrement()
      void operator--()
       {
                 a=--a;
                 b=--b;
        }
        void operator+()
        {
            a=a+b;
        }
       void display()
        {
                 cout<<a<<"\t\n"<<b<<endl;
         }
};

int main()
{
    complex obj;
    int a;
    obj.getvalue();
    ++obj;
    cin>>a;
    +a;
    cout<<a<<endl;
   //obj.increment();
     cout<<"Increment Complex Number\n";
     obj.display();
   // obj.decrement();
   --obj;
     cout<<"Decrement Complex Number\n";
     obj.display();
     cout<<"Addition Complex Number \n";
     +obj;
     obj.display();
     return 0;
}
