#include<iostream>
using namespace std;
double fact(int n)
{
if (n==1)
return 1;
else
return n*fact(n-1);
}
int main()
{
double f,n;
cout<<"enter";
cin>>n;
f=fact(n);
cout<<f;
}
