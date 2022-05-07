//Answer the questions (i) and (ii) after going through the following class:
#include <iostream>
using namespace std;

class Seminar
{
int time;
public:
    Seminar()       //Function 1
   {
       time = 30;
       cout<< "Seminar starts now" <<endl;
   }

   void lecture()       //Function 2
   {
       cout<< "Lectures in the seminar on" <<endl;
   }

    Seminar(int duration)       //Function 3
   {
       time = duration;
       cout<< "Seminar starts now" <<endl;
   }

   ~Seminar()       //Function 4
   {
      cout<< "Thanks" <<endl;
   }
};

int main(){

    Seminar s1;
    Seminar s2(2);
}

//i. Write statements in C++ that would execute Function 1 and Function 3 of class Seminar.
        //Seminar s1;    // Execute funtion 1
        //Seminar s2(2);  //Execute function 3
//ii. In Object Oriented Programming, what is Function 4 referred as and when does it get invoked/called?
        //It is a Destructor, it is invoked as soon as the scope of the object gets over.