#include<iostream>
using namespace std;
class Test 
{
     public: 
     int i; 
     void get();
};

 
void Test::get()
{
     std::cout<<"\nEnter the value of i:";
     std::cin>> i;
}
 
Test t;// Global object 


int main()
 {
     Test t;// local object 
     t.get();
     std::cout <<"value of i in local t: "<<t.i; 
     ::t.get();
     std::cout <<"value of i in global t:"<< ::t.i;
     return 0;
 }
