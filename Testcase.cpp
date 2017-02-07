#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class String
{
    char str[1000];
public:
    void input()
    {
        gets(str);
    }
    int operator==(String s2);
};
String::operator==(String s2)
{
    int t= strcmp(str,s2.str);
    if(t==0)
        t=1;
    else
        t=0;
    return t;
}

int main()
{

    char st1[1000],st2[1000];
    String s1,s2;
    cout<<" Enter 1st String : ";
    s1.input();
    cout<<" enter 2nd String : ";
    s2.input();
    if(s1==s2)
        cout<<" Two Strings are equal ";
    else
        cout<<" Two String are not equal ";
    return 0;
}
