#include <iostream>
using namespace std;

int main()
    {
        int age;
        cout << "Enter the age: ";
        cin >> age;

        try{
            if(age<18)
            throw age;
            cout << "Eligible";
        }

        catch(int a){
            cout << "NOT Eligible";
        }
    }