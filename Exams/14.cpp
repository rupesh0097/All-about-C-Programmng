#include <iostream>
using namespace std;
class A
{
int id;
static int count;
public:
A()
{
count++;
id = count;
cout << "constructor called " << id << endl;
}
~A()
{
cout << "destructor called " << id << endl;
}
};
int A::count = 0;
int main()
{
A a[2];
return 0;
}
