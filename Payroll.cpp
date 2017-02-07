#include <iostream>
using namespace std;

class employee {
private:
    long int id;
    int salary;
    double netSalary;
public:
    employee(int i=0, int sal=0,double total=0) {
        id = i;
        salary = sal;
        netSalary = total;
    }
    void setSalary(int sal) {
        salary = sal;
    }

    void setId(int i) {
        id = i;
    }

    int getID() {
        return id;
    }

    int getSalary() {
        return salary;
    }

    float getTotal() {
        netSalary = (float)12.0*salary;
        return netSalary ;
    }
};

static int getBestSalary(int sal=0,int i=0) {
    static int bestSalary = 0;
    static int id = 0;
    if(sal > bestSalary) {
        bestSalary = sal;
        id = i;
    }

    return id;
}
int main() {
    int i,j,n,num,id;
    cout << "Enter the value of N";
    cin >> n;
    employee emp[n];
    for(i=0;i<n;i++) {
        cout << "Salary: ";
        cin >> num;
        emp[i].setSalary(num);



        cout << "ID: ";
        cin >> id;
        emp[i].setId(id);

        getBestSalary(num,id);

    }

    cout << "Entered Data: " << endl;
    cout << "ID: \t" << "Salary: \t" << "Total: "<< endl;
    for(i=0;i<n;i++) {
        cout << emp[i].getID() << "\t" << emp[i].getSalary() << "\t\t"<< emp[i].getTotal() << endl;
    }

    cout << "Best Salary: " << getBestSalary();

    return 0;
}
