#include <iostream>
#include <string>
using namespace std;

// creating a class
class person
{

    //creating member varibles 
    string name;
    int age;
    float height;
public:
    //creating non parametric constructor
    person()
    {
        //seting default values of the member variables so that it should not contain garbage value
        name = "Null";
        height = 0;
        age = 0.0f;
    };

    //creating a getter function to get the valus in member variables
    void getdata()
    {
        cout << "Name   : " << name<< endl;
        cout << "Age    : " << age << endl;
        cout << "Height : " << height << endl;
    }
    
};

int main()
{
    person obj;                    //creating an object 
    obj.getdata();                 //calling a getter function
};