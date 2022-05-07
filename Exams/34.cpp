#include <iostream> 
class Test
{ public: 
int i; 
void get(); 
}; 
void Test::get() 
{ 
 std::cout << "enter the value of i:"; 
std::cin >> i; 
} Test t; 
int
main() 
{ 
 Test t; 
 t.get(); 
 std::cout << "value of i in local t:" << 'n'; 
 ::t.get(); 
 std::cout << "value of i in global t:" << ::t.i << 'n'; 
return 0; 
}