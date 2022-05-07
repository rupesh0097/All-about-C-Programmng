#include<iostream>
using namespace std;


// ! The class base is an abstract class as it has one pure virtual function.  
class Base
{
   int x;
public:
    virtual void fun() = 0;
    int getX() { return x; }
};
  
// This class inherits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called"; }
};
  
int main(void)
{
    Derived d;
    d.fun();
    return 0;
}



interface Car {
    void changeGear(int newValue);

    void speedUp(int increment);

    void applyBrakes(int decrement);
}