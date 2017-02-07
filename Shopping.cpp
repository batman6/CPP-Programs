#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
void mobiles()
{
    ifstream fin;
    char n;
    string ch;
    fin.open("Mobiles.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    cout<<"What do you want to buy"<<endl;
    cin>>n;
    char index;
    fin.seekg(0);
    while(!fin.eof())
    {
        fin>>index;
        if(index==n)
            break;
    }
    fin>>index;
    while(index=='\n')
    {
        fin>>index;
        cout<<index;
    }
    fin.close();

}
void laptop()
{
    ifstream fin;
    char n;
    string ch;
    fin.open("Laptops.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    cout<<"What do you want to buy"<<endl;
    cin>>n;
    char index;
    fin.seekg(0);
    while(!fin.eof())
    {
        fin>>index;
        if(index==n)
            break;
    }
    fin>>index;
    while(index=='\n')
    {
        fin>>index;
        cout<<index;
    }
    fin.close();
}
void gaming()
{
    ifstream fin;
    char n;
    string ch;
    fin.open("Gaming.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    cout<<"What do you want to buy"<<endl;
    cin>>n;
    char index;
    fin.seekg(0);
    while(!fin.eof())
    {
        fin>>index;
        if(index==n)
            break;
    }
    fin>>index;
    while(index=='\n')
    {
        fin>>index;
        cout<<index;
    }
    fin.close();
}
void storage()
{
    ifstream fin;
    char n;
    string ch;
    fin.open("Storage.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    cout<<"What do you want to buy"<<endl;
    cin>>n;
    char index;
    fin.seekg(0);
    while(!fin.eof())
    {
        fin>>index;
        if(index==n)
            break;
    }
    fin>>index;
    while(index=='\n')
    {
        fin>>index;
        cout<<index;
    }
    fin.close();
}
void accessories()
{
    ifstream fin;
    char n;
    string ch;
    fin.open("Accessories.txt",ios::in);
    while(!fin.eof())
    {
        getline(fin,ch);
        cout<<ch;
        cout<<endl;
    }
    cout<<"What do you want to buy"<<endl;
    cin>>n;
    char index;
    fin.seekg(0);
    while(!fin.eof())
    {
        fin>>index;
        if(index==n)
            break;
    }
    fin>>index;
    while(index=='\n')
    {
        fin>>index;
        cout<<index;
    }
    fin.close();
}
int main()
{
    int choice;
    cout<<"********************************\tWELCOME TO OUR SHOPPING HUB\t********************************"<<endl;
    cout<<"1.Mobiles"<<endl;
    cout<<"2.Laptops"<<endl;
    cout<<"3.Gaming"<<endl;
    cout<<"4.Storage"<<endl;
    cout<<"5.Accessories"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"Please Choose your option"<<endl;
    cin>>choice;
    switch(choice){
    case 1:
        mobiles();
        break;
    case 2:
        laptop();
        break;
    case 3:
        gaming();
        break;
    case 4:
        storage();
        break;
    case 5:
        accessories();
        break;
    case 0:
        cout<<"Thank you for shopping with us"<<endl;
        exit(0);
        break;
    }
    return 0;
}
