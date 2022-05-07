// Array of objects
// An array can be of any type even struct and class. 
// Let's deomnstrate

#include <iostream>
using namespace std;

//creating a class
class employee{
private: 
    char name[20];
    int age;

public:
    void getdate(){
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }

    void printdata(){
        cout << "Name: "<< name << endl;
        cout << "Age: " << age;
    }
};

const int size =3;

int main(){
    employee manager[3];            //array of object
    employee engineer[2];
    employee worker[20];

    for(int i =0; i<size; i++)
    {
        cout << "Enter Details of Manager "<< i+1 << endl;
        manager[i].getdate();
    }
    for(int i =0; i<size; i++)
    {
        cout << "\nDetails of Manager are: "<< i+1 << endl;
        manager[i].printdata();
    }

}