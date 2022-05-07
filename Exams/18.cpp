#include <iostream>
#include <string>
using namespace std;

class Mammal{
 public:
virtual void Define(){
cout<<"I'm a Mammal\n";
}
};


class Human: public Mammal{
 private:
void Define(){
cout<<"I'm a Human\n";
}
};


int main(int argc, char const *argv[])
{
    Mammal *M = new Mammal();
    Human H;
    M = &H;
    M->Define();
    return 0;
}

