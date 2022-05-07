#include<iostream>
using namespace std;

class A{

    int id;

    //! Static Variable: 
    

    int count=0;

    public:
    A()
    {
    count++; 
    id= count;
    cout<<"Constructer for id"<<id<<endl;
    }

    ~A()
    {
    cout<<"Destructor for id"<<id<<endl; }
};

// int A::count=0;

int main()
{
    A a[3];
    return 0;
}