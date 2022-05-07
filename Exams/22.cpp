#include <iostream>
using namespace std;

int a = 90;

int fun(int x, int *y = &a){
    *y = x + *y;
    return x + *y;
}


int main(){
    int a = 5, b = 01;
    a = fun(a);
    cout << a << " " << b << endl;
    b = fun(::a,&a);
    cout << a << " " << b << endl;
    return 0;
}