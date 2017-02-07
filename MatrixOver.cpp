#include<iostream>
using namespace std;
class mat
{
private:
    int row,col;
    int a[10][10],b[10][10];
public:
    void createmat()
    {
        cout<<"\n Enter rows and column"<<endl;
        cin>>row>>col;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void displaymat()
    {
        cout<<"\n matrix is "<<endl;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    mat operator+(mat m2)
    {
        mat m;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                m.a[i][j]=a[i][j]+m2.a[i][j];
            }
        }
        return m;
    }
    mat operator-(mat m3)
    {
        mat m1;
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                m1.a[i][j]=a[i][j]-m3.a[i][j];
            }
        }
        return m1;
    }
    void display()
    {
        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
};
int main()
{
    mat m1,m2,result1,result2;
    cout<<"\nmatrix 1 :"<<endl;
    m1.createmat();
    cout<<"\nmatrix 2 :"<<endl;
    m2.createmat();
    result1=m1+m2;
    result2=m1-m2;
    cout<<"\nADDITION"<<endl;
    result1.display();
    cout<<"\nSUBSTRACTION"<<endl;
    result2.display();
    return 0;
}
