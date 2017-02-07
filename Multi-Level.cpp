// Using multilevel Inheritance

#include<iostream>
using namespace std;

class student // Base Class
{
        protected:
                        int rollno;
                        char *name;
        public:
                        void getdata(int b,char *n)
                        {
                            rollno = b;
                            name = n;
                        }
                        void putdata(void)
                        {
                                cout<< " The Name Of Student \t: "<< name<< endl;
                                cout<< " The Roll No. Is \t: "<< rollno<< endl;
                        }
};

class test:public student // Derieved Class 1
{
        protected:
                        float m1,m2;
                        public:
                        void gettest(float b,float c)
                        {
                            m1 = b;
                            m2 = c;
                        }
                        void puttest(void)
                        {
                            cout<< " Marks In OOAD Is \t: "<< m1<< endl;
                            cout<< " Marks In Maths Is \t: "<< m2<< endl;
                        }
};

class result:public test // Derieved Class 2
{
protected:
float total;
public:
            void displayresult(void)
            {
                total = m1 + m2;
                putdata();
                puttest();
                cout<< " Total Of The Two \t: "<< total<< endl;
             }
};

int main()
{

    int x;
    float y,z;
    char n[20];
    cout<< "Enter Your Name:";
    cin>>n;
    cout<< "Enter The Roll Number:";
    cin>>x;
    result r1;
    r1.getdata(x,n);
    cout<< "ENTER OOAD MARKS:";
    cin>>y;
    cout<< "ENTER MATHS MARKS:";
    cin>>z;
    r1.gettest(y,z);
    cout<< "\n"<< "\n"<< "************ RESULT **************"<< endl;
    r1.displayresult();
    cout<< "**********************************"<< endl;
    return 0;
}
