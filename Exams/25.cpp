#include <iostream>
using namespace std;
class Room { public: double
length; double breadth; 
double height; double
calculateArea() { 
return length * breadth;
 }
 double calculateVolume() {
 return length * breadth * height;
 }
}; 
int main() { Room 
room1; room1.length 
= 4.5; 
room1.breadth = 3.8;
room1.height = 9.2; 
cout<<room1.calculateArea()<<room1.calculateVolume(); 
return 0;
}