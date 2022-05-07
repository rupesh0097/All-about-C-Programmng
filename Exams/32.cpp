#include <iostream>
#include <string>
using namespace std;
class A
{
	int a;
 
   public:
	int assign(int i) const {
		a = 8;
	}
	int return_value() const {
		return a;
	}
};
int main(int argc, char const *argv[])
{
	A obj;
	obj.assign(5);
	cout<<obj.return_value();
}