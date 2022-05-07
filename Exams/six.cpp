#include <iostream>
#include <string>
using namespace std;

class Box{
    int capacity;
    public:

    Box(int cap){
    capacity = cap;
    }

    friend void show();     //! declaring friend function
};


//!Defining friend function
void show()
{
Box b(10);
cout<<"Value of capacity is: "<<b.capacity<<endl;
}

int main()
{
show();
return 0;
}
