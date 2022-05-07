#include <iostream>
using namespace std;
class Point
{
    
    int x, y;
  
  public:
   Point(int i = 0, int j =0)
   { x = i; y = j;  }
   int getX() const { return x; }
   int getY() const {return y;}
};
 
int main()
{
    const Point t;
    cout << t.getX() << " ";

    //! CPP doesn't allow constant object to access non-constant member function.
    cout << t.getY();
    return 0;
}