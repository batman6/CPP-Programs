#include<iostream>
using namespace std;
long int employee_id;
int employee_salary;
float net_salary;
static int best_salary;
class payroll
{
        public:
        int setsalary();
        int getsalary();
        int gettotal();
}obj;
int payroll::setsalary()
{
    cout<<"ENTER EMPLOYEE ID and ENTER SALARY";
    cin>>employee_id>>employee_salary;
}
int payroll::getsalary()
{
    cout<<employee_id<<"\t\t"<<employee_salary<<endl;
}
int payroll::gettotal()
{

}


int main()
{
int i,j,n;
cout<<"Enter number of employee:\n";
cin>>n;
for(i=0;i<n;i++)
{
    obj.setsalary();
}
cout<<"Employee Id     Employee salary"<<endl;
for(i=0;i<n;i++)
{
    obj.getsalary();
}
return 0;
}

