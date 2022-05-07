#include <iostream>
using namespace std;

int main()
    {
        int num1, num2;
        cout << "Enter two number: "<< endl;
        cin >> num1 >> num2;

        try{
            if(num2==0)
            throw num2;
            throw 'a';
            else if (num2== 1)
            throw num1;

            
            cout << "num1" <<"/" << "num2 is : " << num1/num2 << endl; 
        }

        catch(char a){
            cout << "Division by 0 is not possible. " << endl;
        }
        catch(int b ){
            cout << "The division by 1 is :  " << b << endl;
        }
        // catch(float b){
        //     cout << "This handles all the exceptions:  " << endl; 
        //     cout << "0 divided by anything is 0. " << endl; 
        // }
    }