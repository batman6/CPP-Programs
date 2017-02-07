#include<iostream>
//#include<string>
#include<algorithm>
#include<locale>
#include<ctype.h>
using namespace std;
int main()
{
string str, temp;
int i, j;

   cout<<"\nEnter the string :";
   getline(cin,str);
   cout<<str<<endl;
   reverse(str.begin(),str.end());
   cout<<str;
   return (0);
}
