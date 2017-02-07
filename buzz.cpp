#include<iostream>
using namespace std;
int main()
{
    int num,digit;
    cin>>num;
    if(num%7==0)
        cout<<"buzz";
    while(num>0)
    {
        digit=num%10;
        if (num==7)
            cout<<"buzz";
        num=num/10;
    }
    return 0;
}
