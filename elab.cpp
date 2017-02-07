#include<iostream>
using namespace std;
main()
{
    int num,sum=0;
    while(1)
    {
        cin>>num;
        if(num!=0)
        {
            sum=sum+num;
        }
        else
            break;
    }
    cout<<sum;
    return 0;
}

