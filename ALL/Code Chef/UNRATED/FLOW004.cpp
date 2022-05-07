//Sum of first and last digit
#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n; 
        int first, last;
        cin >> n;
        last = n%10;
        
        while(n>10){
            n = n/10;
        }
        first = n%10;
    
    int sum = last + first;
    cout << sum;
    }
}