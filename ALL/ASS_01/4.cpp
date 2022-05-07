#include <iostream>
using namespace std;

class arith{
    float num1,num2;
    public:

    inline void mul(){
    cout<<num1*num2 << endl;
}
    inline void div(){
        cout << num1/num2;
    }

    inline void get(){
    cout<<"Input Two Number : ";
    cin>>num1>>num2;
}
    
};



int main()
    {
        int a, b;
        arith a1;
        a1.get();
        a1.mul();
        a1.div();
    }