// function overloading means using same functions names to creat functions that perform different task
// This is known as function polymorphism
// Function overloading is a feature of object oriented programming where two or more functions can 
// have the same name but different parameters.
// functions must differ from each other by the types and the number of arguments
//

#include <iostream>
using namespace std;

int sum(int a, int b){return a+b;}
float sum(float a, float b){return a+b;}
double sum(double a, double b){ return a+b;}
int main()
{
   sum(1,2);
   sum(1.0, 2.0);
   sum(1.0, 2.0); 
}
