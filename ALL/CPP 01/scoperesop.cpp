//There we will disscus about scope resolution operator
#include <iostream>
using namespace std;

int c= 45;

int main()
{
    int a = 5;
    int b = 10;
    int c = a +b;
    cout << "The value of c is : " << c << endl;
    cout << "The value of global c is : " << ::c << endl;
}