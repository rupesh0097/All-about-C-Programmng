#include <iostream>
using namespace std;

class position{
    public:
    int x=10;
    int y =15;

    //declaring a operator overloading using a member func
    position operator  + (position p1)
    {
        position sum;
        sum.x = x + p1.x;
        sum.y = y + p1.y;
        return sum;
    }
};

 
int main()
    {
        position p1,p2;
        position p3;
        p3 = p1+p2;
        return 0;
    }