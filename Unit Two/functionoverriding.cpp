/*
! Requirement for function overriding
    * Inheritance should be there. 
    * It cannot be done in a class. 
    * Function redefined should have same name, return type, and paramater list. 
    * Function overloading happens in the same class bt not overriding. 

*/
#include <iostream>
using namespace std;

class base{
    public:
    void show(){ cout << "Base" << endl;}
};

class derived: public base{
    public:
    void show()
    { cout << "Derived" << endl;
      base:: show();
    }
};
int main()
    {
    
    // base d;
    // d.show();

    derived e,f;
    e.show();

    //f.base::show();
    }