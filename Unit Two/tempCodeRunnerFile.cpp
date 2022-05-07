#include <iostream>  
using namespace std;
class A{
public:
	int a;
};
int main(int argc, char const *argv[])
{
	A a1 = {10};
	A a2 = a1;
	cout<<a1.a<<a2.a;
	return 0;
}