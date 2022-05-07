//here we are going to learn how to acces private member function in cpp
//in cpp members are hidden  by defaut
//we can access public member function by object name followed by function name connected by . operator

//we cannot call private member function via object. 
//we have to call private memeber function within another public function of same class.

#include <iostream>
using namespace std;

class emp{
    char name[20];
    int age;
    double salary;
    void getemp(){
        cout << "Enter the name, age and salary : ";
        cin >> name >> age >> salary;
    }

    public:
    void setemp(){
        getemp();
        cout << name << endl << age << endl <<salary << endl;
    }
};

int main(){
    emp e1;
    e1.setemp();
}