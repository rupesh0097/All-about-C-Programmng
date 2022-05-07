#include <iostream>
using namespace std;

class base{
    public:
    virtual void fun(){
        cout << "Base" << endl;
    }
};
class derived : public base{
    void fun(){
        cout << "Derived" << endl;
    }
};
int main()
    {
        base *b, b1;
        derived *d, d1;

        
        // b1.fun();       
        // b->fun();

        b = &b1;
        b->fun();
        b = &d1;
        b->fun();
        
        
    }
// 