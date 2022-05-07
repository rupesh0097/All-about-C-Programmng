#include <iostream>
using namespace std;

class test{
    static int x;
public:
    void static set(int y ){
        x=y;
    }

    //! This is not static, so it is a member function it is releated to object. 
    void  display(){
        cout << x << endl;
    }
};

//! Static member are needed to be declared even outside the class as they are releated to class. 
int test::x;
int main()
    {
        test t;
        test::set(10);
        //test::display();
        t.display();

    }