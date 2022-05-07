// ! Unary operator overloading using friend function. 
#include <iostream> 
using namespace std;

class space{
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout << x << y << z << endl;
    }

    //! Overloading Operator-() function usign friend functio.
    friend void operator -(space &s){
        s.x=-s.x;
        s.y=-s.y;
        s.z=-s.z;
    }
};

int main(){
    space s;
    cout << "Before acticating operator-() function. " << endl;
    s.getdata(2, 4, 5);
    s.display();

    
    cout << "After acticating operator-() function. " << endl;
    -s;
    s.display();
}