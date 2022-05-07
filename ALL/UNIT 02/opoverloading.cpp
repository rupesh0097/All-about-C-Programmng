#include <iostream>
using namespace std;

//overloading unary - using member function
// ! This is an example of operator overlaoding.
// ! Operator overloading is basically an example of compile time polymorphism.
class num{
    int x;
public:
    num(){
        x = 0;
    }
    num(int i){
        x =i;
    }

    void operator -()
    {
        x = -x;
    }

    void show(){
        cout << x << endl;
    }
};
int main()
    {
        num n1(2);
        n1.show();
        -n1;
        n1.show();
    }