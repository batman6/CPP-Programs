//3.Create a class String. Use overload == operator to compare two Strings.
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class String
{
private:
    char str[100];
public:
    void getdata()
    {
        gets(str);
    }
    int operator==(String s2)
    {
        int t=strcmp(str,s2.str);
        if(t==0)
            t=1;
        else
            t=0;
        return t;
    }
};
int main()
{
    char str1[100],str2[100];
    String s1,s2;
    cout<<"Enter 1st String"<<endl;
    s1.getdata();
    cout<<"Enter 2nd String"<<endl;
    s2.getdata();
    if(s1==s2)
        cout<<"Strings are SAME"<<endl;
    else
        cout<<"Strings are NOT SAME"<<endl;
    return 0;
}
