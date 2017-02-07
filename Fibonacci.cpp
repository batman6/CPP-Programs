#include<iostream>
using namespace std;
int main()
{
int n,s=0,a=0,b=1,i;
cout<<"Enter your Range";
cin>>n;
for(i=0;i<n;i++)
{
    s=a+b;
    a=b;
    b=s;
    cout<<a<<" ";
}
return 0;
}

