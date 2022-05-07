// ! Unary operator overloading using member function. 
#include <iostream>
using namespace std;

class space{
    int x;
    int y;
    int z;

public:
    void setdata(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout << x << y << z << endl;
    }

    //! Operator function of member variable.
    //! NOTE, that the operator-() takes no argument as it is a member function. 
    //! Since, operator -() function is a function of same class it can acces members of object which activates it. 
    void operator -(){
        x = -x;
        y = -y;
        z = -z;
    }
};
int main(){

    space s;
    s.setdata(2,-4,5);
    s.display();
    
    //! After activating Operator -() function. 
    cout << "After activating Operator -() Function" << endl;
    -s;
    s.display();
}