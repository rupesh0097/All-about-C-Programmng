#include <iostream>
#include <string>
using namespace std;

class A{
 int a;
 public:
A(){
a = 0;
}
void show(){
a++;
cout<<"a: "<<a<<endl;
}
};


class B: public A
{
 
};


int main(int argc, char const *argv[]){
B b;
b.show();
b.show();
b.show();
b.show();
b.show();

return 0;
}
