#include <iostream>
using namespace std;

class A{
    public:
    int n = 1000;
    char ch = 'R';

    void getter(){
        cout << "Enter Your name: " << endl;
    }
    void display( A rupesh){
        cout << rupesh.n << endl;
        cout << rupesh.ch << endl;
    }
};
int main()
    {
        A obj;
        obj.getter();          //function call with out argument
        obj.display(obj);       //function call with obj as argugment
        return 0;
    }