/*
copy constructors are used to creat new objects from the existing objects
we pass reference of an object as an arguments
*/
#include <iostream>
#include <string>
using namespace std;

// creating a class
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
        height =z;
    }
    //creating a copy constructor
    person(person &obj1)               //here we are passing a reference of obj1 using &
    {
        name = obj1.name;              //here we are passing values of member var of obj1 to to member var of obj2    
        age = obj1.age;
        height = obj1.height;
    }

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
    //creating an object of class person and passing the values to the constructor
    person obj1("Rupesh", 20, 5.5);         //parametrized constructor
    person obj2(obj1);                      //copy constructor
    obj1.getdata();
    obj2.getdata();

}