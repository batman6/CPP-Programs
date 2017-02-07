
// Function overloading in C++


#include <iostream>
using namespace std;
class Add
{
    public:
    long add(long, long);
    float add(float, float);
    void add(int,int,int);
};
int main()
{
   Add obj1;
   long a, b, x;
   float c, d, y;
   int f,g,h;

   cout << "Enter two long integers\n";
   cin >> a >> b;

   x = obj1.add(a, b);

   cout << "Sum of  long integers: " << x << endl;

   cout << "Enter two floating point numbers\n";
   cin >> c >> d;

   y = obj1.add(c, d);

   cout << "Sum of floats: " << y << endl;
   cout <<"Enter three integers \n";
   cin>>f>>g>>h;

   obj1.add(f,g,h);

   return 0;
}

long Add:: add(long x, long y)
{
   long sum;

   sum = x + y;

   return sum;
}

float Add:: add(float x, float y)
{
   float sum;

   sum = x + y;

   return sum;
}
void Add:: add(int x, int y,int z)
{
    int sum;
    sum=x+y+z;
    cout<<"\n The sum of three numbers are:"<<sum<<endl;
}
