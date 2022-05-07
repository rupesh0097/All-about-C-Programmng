//Sum of digits
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int sum =0;
        while(n>0){

            sum = sum + n%10;           //gives the remainder i.e last digit
            n = n/10;                   //decrease the number by 1 digit
            
        }
    cout << sum; 
    }
}