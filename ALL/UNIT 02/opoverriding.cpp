#include <iostream>
using namespace std;


//! THis is an example of operator 
class base{
    public:
    void show(){
        cout << "Helllo";
    }
};

class derived: public base{
    public:
    void show(){
        cout << "World";
        base ::show();
    }
};
int main()
    {
        derived d;
        d.show();
    }