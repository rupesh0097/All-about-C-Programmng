#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle (int,int);

        int areaofrect ()
        {
            return (length * breadth);
        }
        int length1()
        {
            return length;
        }

        int breadth2()
        {
            return breadth;
        }
};


Rectangle::Rectangle(int x, int y)
{
    length = x;
    breadth = y;
}


int main ()
{
    Rectangle myrectangle (5,5);

    cout<<"The Length of Rectangle  :: "<<myrectangle.length1()<<"\n";
    cout<<"The Breadth of Rectangle :: "<<myrectangle.breadth2()<<"\n";
    cout<<"The area of rectangle is :: " << myrectangle.areaofrect()<< "\n";
    return 0;
}