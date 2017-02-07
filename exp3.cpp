#include<iostream>
using namespace std;
#define no_sal 2
const int emp =2;
class Employee
{
private:
long int empid;
int salary[emp];
int total;
static int bestSal;
public:
Employee()
{
     total=0;

   }

void setSalary();
//void displayMarks();
void getSalary();
void sum();
int  getTotal();
static int getbestSalary();
static void bestSalary(Employee *);
};

  int Employee::bestSal;


void Employee::setSalary()
   {
    int j;

       cout<< "\nEnter Employee ID:\n";
       cin>>empid;
       cout<< "Enter Monthly Salary & Incentives:\n";
       for(j=0;j<emp;j++)
       {
      cin>>salary[j];
       }

}
    void Employee::getSalary()
       {
       int j;
       cout<<" The EmPID is :"<<empid<<endl;

       for(j=0;j<no_sal;j++)
	 {
	  cout<<"\n Salaries are: \t"<<salary[j];
	  	 }

       }


void Employee::sum()
   {

   for (int i=0;i<emp;i++)
     {

    total+=salary[i];

     }
   }
 int Employee::getTotal()
  {
  return total;
  }


 void Employee::bestSalary(Employee *e)
   {
     int i;
     int temp=0;
      for(i=0;i<emp;i++)
       if(e[i].getTotal() > temp)
	  Employee::bestSal=e[i].getTotal();
       else
          temp=e[i].getTotal();



   }
  int Employee:: getbestSalary()
 {
   return Employee::bestSal;
 }
int main()
{
 int i,j;
 //clrscr();
 Employee e[emp];
  for (i=0;i<emp;i++)
       {
	e[i].setSalary();
	e[i].getSalary();
       }
   for (i=0;i<no_sal;i++)
       {
	 e[i].sum();
	 cout<<" \n Employee Total Salary "<<i+1<<": \t"<<e[i].getTotal()<<endl;
     cout <<"\n";
       }
       Employee::bestSalary(e);
       cout <<" The best salary: "<<Employee::getbestSalary()<<endl;

   return 0;

   }

