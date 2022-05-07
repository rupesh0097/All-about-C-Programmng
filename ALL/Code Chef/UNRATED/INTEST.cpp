#include <iostream>
using namespace std;

WAP to check how many times i is divisible by k
int main(){
    int n,k;
    
    cin >> n >> k;
    int count =0;
    while(n--){
        int i;
        cin >> i;
        if(i%k == 0) {count ++;}
    }
    cout << count;
    
}

