//finding GCD or HCF using euclid algorithm
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int a,b;
        cin>> a>>b;
        while(b!=0){
            if(a>b){ a = a-b;}
            else { b = b-a;}
        }
        cout <<a;
    }
}