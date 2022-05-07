#include <iostream>
using namespace std;

int global=0;


void fun1() {
    global++;
    cout << "I have been called " << global << " times" << endl;
}


void fun2() {
    static int global=0;
    global++;
    cout << "I have been called " << global << " times" << endl;
}


int main() {
    for (int i=0; i<10; i++)
        fun1();


    cout << endl;
    for (int i=0; i<10; i++)
        fun2();
}

// the second approach is more suitable as value of global var can't be changed. 
// local variable can't be used as they cannot access outside the function.