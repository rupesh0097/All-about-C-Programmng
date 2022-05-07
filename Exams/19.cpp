#include <iostream>
using std::cout;
class Test
{
public:
Test();
~Test();
};
Test::Test()
{
cout << "Constructor is executed\n";
}
Test::~Test()
{
cout << "Destructor is executed\n";
}
int main()
{
    delete new Test();
    

 return 0;
}