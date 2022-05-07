// Parametrized constructors are those in which take some arguments
// the parameters are passed while the object creation
#include <iostream>
#include <string>
using namespace std;

// creatin a class
class person
{
private:
    //member variables
    string name;
    int age;
    float height;

public:
    //creating a parametrized constructor
    person(string x, int y, float z)
    {
        name = x;
        age = y;
        height  =z;   
    };

    //creating a getter function
    void getdata()
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Height : " << height << endl;
    }

};

int main()
{
    person obj("Rupesh", 20, 5.5);         //creating an object and passing arguments
    obj.getdata();                         //calling the getter function

    person obj2("Yadav", 21, 5.10);         //creating another object and passing arguments
    obj2.getdata();                         //calling the getter function
}
