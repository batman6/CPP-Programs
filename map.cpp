#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map <string,int> map1;
    int age;
    string name;
    cin>>name;
    cin>>age;
    map1[name]=age;
    map<string,int>::iterator itr;
    cout << itr->first<<" "<<itr->second;
    return 0;
}
