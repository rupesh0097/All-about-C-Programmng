/*
we area going to learn about constructors today.

A constructor is a special type of member function of a class which initializes objects of a class.
In C++, Constructor is automatically called when object(instance of class) is created.
It is special member function of the class because it does not have any return type.

How constructors are different from a normal member function?

A constructor is different from normal functions in following ways: 

Constructor has same name as the class itself
Constructors don’t have input argument
Constructors don’t have return type
A constructor is automatically called when an object is created.
It must be placed in public section of class.
If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
 
Earlier we were privare member var only using member function. But through constructors we can acces 
member var directly and assign value directly.
There are three types of constructors. They are:
    1)No parametrized constructors
    2)Parametrized constructors
    3)Copy constructors

*/
#include <iostream>
#include <string>
using namespace std;

// creating a class 
class A
{
private: 
    int age;            // memeber variable 

public:
    A(int x)            // creating a constructor
    {
        age =x;
    };

    int getdata()       // creating getdata() function to 
    {
        return age;
    }
};

int main()
{
    A obj(21);                          //creating an object and passing the value to the constructor
    cout << "The age is: " << obj.getdata()<< endl;         // calling and printing getdata function()
};