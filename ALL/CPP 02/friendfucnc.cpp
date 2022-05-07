#include <iostream>
using namespace std;

class Alpha{
    int a;

    public:
    Alpha(int alf=0){
        a =alf;
    }
    
    friend void fun();
};
class Beta{
    int b;

    public:
    Beta(int bet=0){
        b = bet;
    }
    
    friend void fun();
};

void fun(){
    Alpha a1(5);                //creating object of alpha class
    Beta b1(10);                //creating object of beta class
    int sum = a1.a + b1.b;
    cout << "The sum of a and b is : " <<sum<< endl;
}
int main(){
    fun();
}