/*
1.Create a class FLOAT that contains one FLOAT data member.
Overload all the four arithmetic operators so that they operate on the objects FLOAT.
2.Create a class MAT of size m x n. Define all possible matrix operations for MAT type objects.
*/
#include<iostream>
using namespace std;

class FLOAT
{
    float a,b;
public:
    void getvalue()
    {
        cout<<"Enter the value of FLOAT Numbers a,b:";
        cin>>a>>b;
    }
    FLOAT operator+(FLOAT ob)
    {
        FLOAT t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return(t);
    }
    FLOAT operator-(FLOAT ob)
    {
        FLOAT t;
        t.a=a-ob.a;
        t.b=b-ob.b;
        return(t);
    }
    FLOAT operator/(FLOAT ob)
    {
        FLOAT t;
        t.a=a/ob.a;
        t.b=b/ob.b;
        return(t);
    }
    FLOAT operator*(FLOAT ob)
    {
        FLOAT t;
        t.a=a*ob.a;
        t.b=b*ob.b;
        return(t);
    }
    void display()
    {
        cout<<a<<"\n"<<b<<"\n";
    }
};
int main()
{
    FLOAT obj1,obj2,result1,result2,result3,result4;
    obj1.getvalue();
    obj2.getvalue();

    result1=obj1+obj2;
    result2=obj1-obj2;
    result3=obj1*obj2;
    result4=obj1/obj2;
    cout<<"Input Values:\n";
    obj1.display();
    obj2.display();
    cout<<"Result:\n";
    cout<<"Addition"<<endl;
    result1.display();
    cout<<"Substraction"<<endl;
    result2.display();
    cout<<"Multiplication"<<endl;
    result3.display();
    cout<<"Division"<<endl;
    result4.display();
    return 0;
}
