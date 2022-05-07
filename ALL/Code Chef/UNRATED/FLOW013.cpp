//Valid Traingle
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a>>b>>c;
        int tot = a+b+c;
        
        if(tot == 180)
        {
            cout << "YES" << endl;
        }
        else
        {cout << "NO" << endl;}
    }

}