#include <iostream>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while(t--)
 {
     int a, b,x, total, time;
     cin >> a >> b >>x;
    total = b-a;
    time = total/x;
    cout << time  << endl;
 }
     
}