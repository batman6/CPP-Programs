#include<iostream>
using namespace std;
class IDGenerator
{
private:
int s_nextID;
public:
IDGenerator()::s_nextID(1){}
static int getNextID();
};
// We'll start generating IDs at 1

int IDGenerator::getNextID() { return s_nextID++; }
int main()
{
IDGenerator ob;
for (int count=0; count < 5; ++count)
cout << "The next ID is: " << ob.getNextID() << '\n';
return 0;
}
