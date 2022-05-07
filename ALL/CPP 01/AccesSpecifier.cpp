// acces specifier
// note we can acces private datamember using public function

#include <iostream>
using namespace std;

class stud
{
    private: 
    int uid;
    int marks;

    public:
    void details(int x, int y){        //here we are accesing private data member using public function
        uid = x;
        marks = y;
        cout << uid << endl;
        cout << marks << endl;
    }
};

int main()
{
  stud s1,s2;
  s1.details(201,50);
}