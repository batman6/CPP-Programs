#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int number;
    string ch;
    ofstream fileout;
    fileout.open("File IO.txt",ios::out);
    fileout<<"Hello World"<<endl;
    cout<<"Enter number"<<endl;
    cin>>number;
    fileout<<number;
    fileout.close();
    ifstream filein("File IO.txt",ios::in);
    filein.seekg(0);
    cout<<"The inserted data is"<<endl;
    while(!filein.eof())
    {
        getline(filein,ch);
        cout<<ch;
    }
    filein.close();
    return 0;
}
