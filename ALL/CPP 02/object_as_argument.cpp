//passing and returning object as an argument
//passing class type parameters(obj) to the function
//program to add two complex number

#include <iostream>
using namespace std;

class com{

private: 
    int real, img;
public: 
    void getdata(){
        cin>> real>> img;
    }
    void sum(com c1, com c2){
        com c3;
        c3.real =c1.real + c2.real;
        c3.img = c1.img + c2.img;
        cout << "The sum of complex number is: " << c3.real << "+" << c3.img <<"i"<< endl;
    }
};

int main(){
    com c1,c2, c3;
    c1.getdate();
    c2.getdate();
    c3.sum(c1,c1);          //passing object as argument
}