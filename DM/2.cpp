//* WAP to calculate the total mark of a student by dm allocation 
#include <iostream>
using namespace std;

int main()
    {
        int size, sum =0;
        cout << "Enter the number of student: ";
        cin >> size;

        int *ptr =  new int[size];

        for(int i =0; i < 5; i++){
            cin >> ptr[i];
            sum = sum+ptr[i];
        }

        cout << "The sum of marks is : " << sum; 
        delete [] ptr;
  
    }