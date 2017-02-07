#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    cout<<asctime(timeinfo);
}
