
// Access specifier using mutliple inheritance

#include <iostream>
using namespace std;

// Base class Shape
class Shape
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost
{
   public:
      int getCost(int area)
      {
         return area * 70;
      }
};

// Derived class
class Rectangle: public Shape, public PaintCost
{
   public:
      int getArea()
      {
         return (width * height);
      }
};

int main()
{
   Rectangle Rect;
   int area,w,h;
   cout<<" Enter the width:"<<"\t"<<endl;
   cin>>w;
   Rect.setWidth(w);
   cout<<"Enter the height:"<<"\t"<<endl;
   cin>>h;
   Rect.setHeight(h);
   area = Rect.getArea();
   // Print the area of the object.
   cout << "Total area: " << area << endl;
   // Print the total cost of painting
   cout << "Total paint cost: Rs" << Rect.getCost(area) << endl;
   return 0;
}
