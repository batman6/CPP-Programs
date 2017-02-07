// Program created on 28/07/16.
// Program using library functions.

#include<iostream>
using namespace std;
main()
{
    char ch;
    cout<<" \n Enter any data"<<endl;
    cin>>ch;
    if (!isalnum(ch))
    {
      cout <<" Alpha Numeric"<<endl;
    }
    /*else if(isalpha(ch))

    {
        cout <<" Alpha"<<endl;
    }*/
    else if (isdigit(ch))
    {
        cout <<"Digit"<<endl;
    }
    else if(islower(ch))
    {
       cout <<"Lower Case"<< endl;
    }
    else if(isupper(ch))
    {
       cout <<"Upper Case"<< endl;
    }
    else
    {
        cout <<"Non Alpha"<<endl;
    }
    return 0;
}
