#include <iostream>
using namespace std;


class student{
    public:
    student(){
        cout << "Constructor called \n";
    }

    ~student(){
        cout << "Deconstructor called. \n";
    }
};
int main()
    {
        student *s = new student;   //! allocating memory dynamically
        delete s;                   //! in cpp while dm allocation we need to explicitly deallocated the deconstructor
                                    

    }