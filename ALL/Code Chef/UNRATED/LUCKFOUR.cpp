//Lucky Four
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long number;
        int count =0;
        cin >> number;
        while(number>0){
            int mod = number%10;
            if(mod == 4){count ++;}
            number = number/10;
        }
    
    cout << count;
    }
}