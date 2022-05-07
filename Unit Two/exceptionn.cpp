#include <iostream>
using namespace std;


int main()
    {
        int num1, num2;
        cout << "Enter the number: ";
        cin >> num1 >> num2;

        try{
            if(num1==0)
            throw 2.5;
            if(num1>num2)
            throw 'e';

            cout << "The output is " << num1/num2;
        }

        catch(double i)
        {
            cout << "Division by zero is exception. ";
        }
        catch(char e){
            cout << "The outpue is : " << num1/num2;
        }
    }