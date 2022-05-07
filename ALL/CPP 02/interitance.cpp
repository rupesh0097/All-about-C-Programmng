#include <iostream>
using namespaces std;

class rectangele
{
public:
    int length;
    int breadth;

    void area()
    {
        cout << "The area is : " << length * breadth << endl;
    }
};

class cuboid : public rectangele
{
public:
    int  height;

    void volume(){
        cout << "The volume is : " << length*breadth*height<< endl;
    }
};

int main()
{
    cuboid c1;
    c1.length=5; c1.breadth=10; c1.height= 2;
    c1.volume();
}