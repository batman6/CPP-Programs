/*Exercise 4c
An electricity board charges the following rates to users
– For first 100 units : 40p per unit
– For next 200 units : 50p per unit
– Beyond 300 units : 60p per unit
All users are charged a minimum of Rs.150. If the total cost is more than Rs.250.00 then an additional charges
of 15% are added.
Write a C++ program using class to read the number of units consumed & print out the charges(Use Array of
Objects)
Note-- Using Class and Object.*/
#include<iostream>
#include<cstring>
#include<locale>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

using namespace std;
class electricity
{
private:
    double units;
    double cost;
public:
    string name;
    electricity()
    {
        cost=0;
    }
    void getunit()
    {
        cout<<"\nEnter the total unit consumed\n";
        cin>>units;
        cout<<"\nFor first 100 units : 40p per unit\nFor next 200 units : 50p per unit\nBeyond 300 units : 60p per unit\n";
    }
    void getcost()
    {
        cout<<"\nTotal Units Consumed "<<units;
        if(units<=100)
            cost=.40*units;
        else if(units>100&&units<=299)
            cost=(40)+(.50*(units-100));
        else if (units>=300)
            cost=(40)+(100)+(.60*(units-300));
        cout<<"\nCost: "<<cost<<endl;
        if(cost>250)
            cout<<"\nTotal Value is: "<<cost+(0.15*cost)<<endl;
        else
            cout<<"\nTotal Value is: "<<cost<<endl;
    }
};
main()
{

    int n;
    electricity obj[10];
    cout<<"Enter number of customers";
    cin>>n;
    for (int i=0 ;i<n;i++)
        {
            cout<<"Enter customer name "<<endl;
            cin>>obj[i].name;
            cout<<"Customer is "<<obj[i].name<<endl;
            obj[i].getunit();
            obj[i].getcost();
        }
    return 0;
}
