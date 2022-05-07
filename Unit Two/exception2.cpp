#include <iostream>
using namespace std;

class test{
    public:
    test() {cout << "Constructor\n";}
    ~test() { cout << "Deconstructor\n";}
};
int main()
    {
    try{
    test t;
    throw 'a';
    
    }

    catch(int a ){
        cout << "Catch is : " << a << endl;
    }
    catch(...){
        cout<< "Default Catch : ";
    }
    
}
