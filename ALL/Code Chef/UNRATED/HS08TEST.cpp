//Atm
#include <iostream>
using namespace std;

int main(){
    int amt_to_withdrawl;
    float total_amt;
    cin >> amt_to_withdrawl >> total_amt;

    if(amt_to_withdrawl%5 ==0 && amt_to_withdrawl<=total_amt-0.5)
    {
        total_amt = total_amt  - amt_to_withdrawl - 0.5;
        cout << total_amt << endl;
    }
    else cout << total_amt << endl;

    
}