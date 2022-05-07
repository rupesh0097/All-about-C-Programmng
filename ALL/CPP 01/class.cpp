#include <iostream>
using namespace std;

//Creating a class
class house
{
// Note: private, protected and public are access specifier
// we don't want out memeber variables to be used outside of the class so it is made private.
private:
    int length, breadth;        // member variable

public:
    void setdata(int x, int y)  // member fucnctions 
    {                           
        length =x;              //since member var can't be accessed directely so we are assigning 
        breadth = y;            //through the setData function
    }

    void setdata(int x, int y)  // member fucnctions 
    {                           
        length =x;              //since member var can't be accessed directely so we are assigning 
        breadth = y;            //through the setData function
    }

    void area()                 // member functions
    {
        cout << "M is : " << length* breadth << endl;
        
    }

};

// Creating the object of the class
int main()
{
    house h1;                   // here memory is allocated to the object
    h1.setdata(500, 400);       // accessing and calling the setdata() function
    h1.area();                  // accessing and calling the area() function

    house h2;                   // here memory is allocated to the object
    h2.setdata(5, 4);           // accessing and calling the setdata() function
    h2.area();                  // accessing and calling the area() function

}