#include<iostream>
#include<locale>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    locale loc;
    string str1;
    string str2;
    string str3;
    char ch1;
    cout<<"Enter String "<<endl;
    getline(cin,str1);
    //length of string
    cout<<"Length of String: "<<str1.size()<<endl;
    cout<<"Enter another String"<<endl;
    getline(cin,str2);
    cout<<"Length of String: "<<str2.size()<<endl;
    //comparing
    if(!str1.compare(str2))
    {
        cout<<"Strings are same\n";
    }
    else
    {
        cout<<"String is not same\n";
    }
    //append
    str3=str1+str2;
    cout<<"The New String is "<<str3<<endl;
    //erase
    cout<<"String Before Erasing : ";
    cout<<str1;
    str1.erase(3,1);
    cout<<"After erasing:";
    cout<<str1<<endl;
    //replace
    str3.replace(5,3,"Bat");
    cout<<str3;
    //Converting
    for(int i=0;i<=str1.length();i++)
    {
        cout<<toupper(str1[i],loc)<<endl;
    }
    for(int i=0;i<=str2.length();i++)
    {
        cout<<tolower(str2[i],loc)<<endl;
    }
    return 0;
}
