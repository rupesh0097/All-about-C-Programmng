#include <iostream> 
using namespace std;
class Box{ 
int capacity; 
public:
 Box() {}
 Box(double capacity) {
 this->capacity = capacity;
 }
};
int main()
{
 Box b1(10); 
Box b2 = Box(14); 
if(b1 == b2) { 
cout<<"Equal";
 } else{ 
cout<<"Not Equal";
 }
 return 0;
}