#include <iostream>
using namespace std;

class student{
    string name;
    int roll;
    float height;
    float weight;

public:
    student (string s,int r,float h, float w ){
        name = s;
        roll = r;
        height = h;
        weight = w;
    }

    void print();
    ~student();
};

void student :: print(){
    cout << "Student Details: " << endl;
    cout << "Name   : " << name << endl;
    cout << "Roll   : " << roll << endl;
    cout << "Height : " << height << endl;
    cout << "Weight : " << weight << endl;
}

student ::~student()
{
    cout << "Deconstructor called. ";
}
int main()
    {
        student s1("Rupesh", 32, 20, 55);
        s1.print();
    }