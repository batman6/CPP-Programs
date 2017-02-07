#include<iostream>
using namespace std;
int main()
{
int n,i,j,space;
cout<<"Enter Height Of Pyramid";
cin>>n;
space=n;
for(i=0;i<n;i++)
    {
    for(j=1;j<space;j++)
        {
        cout<<" ";
        }
    space--;
    for(j=0;j<(2*i)-1;j++)
        {
        cout<<"*";
        }
    cout<<"\n";
    }
return 0;
}
