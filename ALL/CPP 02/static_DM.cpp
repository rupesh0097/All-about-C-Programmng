 /*
// here we will disscuss about  
// 1) static data member
// Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program.

 */

// #include <iostream>
// using namespace std;

// //creating a class
// class demo{
//     int a;
//     void fun(int a){
//         return a;
//     }
//     static int b;

// }

// int main(){
//     demo d1,d2,d3;          //here each object contains one instance of datamember a, i.e 3 copies are created
//     demo d1,d2,d3;          //static type is class member not the data member
// }

#include <iostream>
using namespace std;

class sum{
    static int i=5;

    void fun(){
        i++;
        cout << i << endl;
    }

}

int main()
{
  fun();
  fun();
  fun();
}