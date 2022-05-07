//! Abstract class
//* 1. Objects cannot be created of abstract class
//* 2. Pure virtual function is also called abstract function
//* 3. we must over-ride the pure virtual function in derived class else it will become abstract class
//* 4. A Pure virtual function is declared by assignign 0 in declaration. 


//! Intresting Facts about abstract class
//* 1. A class is abstract if it has at least one pure virtual function.
//* 2. We can have pointers and references of abstract class type. 
//* 3. If we do not override the pure virtual function in derived class, then derived class also    becomes abstract class. 
//* 4. An abstract class can have constructors. 





/*
#include<iostream>
using namespace std;
  
class Base
{
public:
    virtual void show() = 0;
};
  
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
};
  
int main(void)
{
    Base *bp = new Derived();
    //Base bp;                  //!Not allowed to create the object 
    bp->show();
    return 0;
}
*/


#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
  
class Derived : public Base { };
  
int main(void)
{
  Derived d;
  return 0;
}