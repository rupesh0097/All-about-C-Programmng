#include<iostream> 
using namespace std; 

class A 
{ 
    public : 
    A() { 
    func(); 
    } 

    ~A() {
        func(); 
    } 

    void func() { 
    cout<< 3; 
    cout<<endl; 
    }

    void fun() { 
    func(); 
    } 
}; 

class B : public A { 

public:
void func() { 
cout<< 2; 
cout<<endl; 
} 

} ; 


int main(){ 
    B b; 
    b.func(); 
    return 0; 
} 