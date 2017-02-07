#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    char name[30],ch;
    cout<<"Enter Your Friends Name";
    for(int i=0;i<3;i++)
    {
        cin.get(name,30);
    }
    ofstream fout("first",ios::out);
    for(int i=0;i<3;i++)
    {
        fout.write(name,30);
    }
    fout.close();
    ifstream fin("first",ios::in);
    fin.seekg(0);
    for(int i=0;i<3;i++)
    {
        fin.get(name,30);
        cout<<name;
    }
    fin.close();
    ofstream fout1("second",ios::out);
    for(int i=3;i<5;i++)
    {
        fout1.write(name,30);
    }
    fout1.close();
    ifstream fin1("second",ios::in);
    fin1.seekg(0);
    for(int i=3;i<5;i++)
    {
        fin1.get(name,30);
        cout<<name;
    }
    fin1.close();
    return 0;
}
