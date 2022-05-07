#include <iostream>
using namespace std;

class base{
    public:
    void fun(){ cout << "This is base. \n";}
};

class derivedone{
    public:
    void fun(){ cout << "This is derived 1.\n";}
};

class derivedtwo: public base, public derivedone{
    public:
    void fun(){ cout << "This is derived 2.\n";}
    
};
int main()
    {
        derivedtwo a;
        a.fun();
        a.base::fun();
        a.derivedone::fun();


    }