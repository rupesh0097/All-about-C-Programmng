/*
C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

Inline function and classes:
It is also possible to define the inline function inside the class. In fact, all the functions defined inside the class are implicitly inline. Thus, all the restrictions of inline functions are also applied here. If you need to explicitly declare inline function in the class then just declare the function inside the class and define it outside the class using inline keyword.
*/

//an inline function is one which is expanded in line when envoked.
//it is similar to macros in c
//it is basically used to save time
//inline keyword sends a request but not the command i.e it may be also ignored if it is too long
//inline function makes program faster because the overhead of the function call and return is eliminated
//however it makes the program to take more memory

// int main()
// {
// 	// inline function
// 	double a, c;
// 	inline double cube(double a)
// 	{
// 		return(a*a*a);
// 	}
	
// 	//calling a function
// 	c = cube(5.0);
// }

//demonstrating inline function

// #include <iostream>
// using namespace std;


// //defining inline function
// inline double multiply(double x, double y)
// {
// 	return x*y;
// }

// inline float divive(float a, float b)
// {
// 	return a/b;
// }

// int main()
// {
	
// 	cout << multiply(20,10) << endl;
// 	cout << divive(10,5) << endl;
// }

//----------------INlINE IN A CLASS----------------------//
#include <iostream>
using namespace std;
class volume
{
	int length, breadth, height, volume;

	public:
	void get();
	void vol();
};
inline void volume :: get(){
	cout << "Enter length, breadth and height: ";
	cin>> length>> breadth>> height;
}
inline void volume :: vol(){
	volume = length*breadth*height;
	cout << volume;
}
int main()
	{
		volume v1;
		v1.get();
		v1.vol();
	}