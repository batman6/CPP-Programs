
// Program using single inheritance & abstraction
# include <iostream>
# include <stdlib.h> // for exit function
using namespace std;

class student
{

private:
              int regno;
              char name[20];

public:

            void getdata();
            void putdata();
};
void student :: getdata()
{  int x;
    cout<<"enter register no"<<endl;
    cin>>x;
    if(x>100)
    {
    cout<<"Reg no is invalid";// Abstraction
    exit(0);
    }
    else
    {
    regno=x;
    cout<<"enter name "<<endl;
    cin>>name;
    }
}
void student :: putdata()
{

    cout<<"Register no :"<<regno<<endl;
    cout<<"Name of the student :"<<name<<endl;
}

class StudentPhysicalDetail : public student // student class inherited in htwt class
{

int ht,wt;
public:
            void getvalue();
            void putvalue();

};
void StudentPhysicalDetail :: getvalue()
{
    getdata(); // invoke student class function
    cout<<"enter height and weight "<<endl;
    cin>>ht>>wt;

}
void StudentPhysicalDetail :: putvalue()
{
    putdata();
    cout<<"Height of the student is "<<ht<<endl;
    cout<<"weight of the student is "<<wt<<endl;
}

int main()
{
    StudentPhysicalDetail obj1;
    obj1.getvalue();
    obj1.putdata();
    obj1.putvalue();
    return 0;
}
