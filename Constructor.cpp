/*Create a C++ program that takes in
//A class student is to be made
Roll no
Name of student
Number of subject
As parameters for its constructor
Calculate
Marks for each subject And overall %
Display the details of all students */

#include<iostream>
#include<stdlib.h>
#include<string>
#include<locale>
#include<cstring>
#include<ctype.h>

int roll,no_sub,marks[100],total=0;
float percentage;

using namespace std;
class student
{
private:
    int rollno1,num_sub1;
    string stud_name1;
public:
    student(int roll,int no_sub)
    {
        rollno1=roll;
        num_sub1=no_sub;
    }
    void getmarks(int no_sub)
    {
        int i;
        for(i=0;i<no_sub;i++)
        {
            cout<<"Enter the marks of subject"<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void getoverall()
    {
        int i;
        for(i=0;i<no_sub;i++)
        {
            total=total+marks[i];
        }
        percentage=total/no_sub;


    }
    void display()
    {
        cout<<"\nRoll number is: "<<rollno1<<endl;
        cout<<"\nNumber of subjects taken: "<<num_sub1<<endl;
        for(int i=0;i<no_sub;i++)
        {
            cout<<"\nMarks obtained in subject"<<i+1<<": "<<marks[i]<<endl;
            cout<<"\n";
        }
        cout<<"\nPercentage of the student is: "<<percentage<<"%"<<endl;
    }

};
main()
{
    int i;
    string name;
    cout<<"\nEnter name of student"<<endl;
    getline(cin,name);
    cout<<"\nEnter student's roll number"<<endl;
    cin>>roll;
    cout<<"\nEnter no. of subjects"<<endl;
    cin>>no_sub;
    cout<<"Name of the student is: "<<name<<endl;
    student obj(roll,no_sub);
    obj.getmarks(no_sub);
    obj.getoverall();
    obj.display();
    return 0;
}
