#include<iostream>
#include<queue>
using namespace std;
int main()
{
    try{
    queue<double>values;
    values.push(3.7);
    values.push(2.0);
    values.push(10.2);
    cout<<"Popping";
    while(!values.empty()){
        cout<<values.front()<<" ";
        values.pop();
    }}
    catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
}
