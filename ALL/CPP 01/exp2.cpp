#include <iostream>
using namespace std;

class num{
	int x;

public:
	sum(int i)			//paraconstructor
	{
		x =i;
	}

	//copy constructor
	sum(num &n)
	{
		x = n.x;
	}
	void show(){
		cout << x<<end;
	}


};
int main(){
	num n1(10);
	num n2(n1);
	n2.show();

}