#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string ch;
    ifstream fin("File Read.txt",ios::in);
    fin.seekg(0);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    fin.close();
    return 0;
}
