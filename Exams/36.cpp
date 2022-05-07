#include <iostream> 
using namespace std;

abstract class student { public: int
grades; 
calc_marks();
} class student1:public
student 
{
 public : calc_marks()
 { 
return 20;
 } };
class student2:public student 
{
 public : calc_marks()
 { 
return 30;
 } }; class
fail { int
grades;
};