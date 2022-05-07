#include <iostream>
using namespace std;

class Alpha{
    int a;
    int b;

    public:
    Alpha(){
        a=5;
        b=10;
        stat++;
    }

    static int stat;
    static int cnt;

    static void count(){
        cnt++;
        cout << "The number of count called is: " << cnt << endl;
    }
};

int Alpha:: stat =0;
int Alpha:: cnt =5;

int main(){
    Alpha a1,a2;
    cout << a1.stat << endl;
    cout << a2.stat << endl;
    cout << Alpha::stat << endl;

    a1.count();             //static function call
    Alpha::count();
    a2.count();
}