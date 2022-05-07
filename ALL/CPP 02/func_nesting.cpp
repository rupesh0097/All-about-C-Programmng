// Nesting of memeber function
// generrally member function is called by object name followed by func name connected by . operator
// calling any member function using its name inside any other member function of same class
// This is called member_function_nesting

#include <iostream>
using namespace std;

//creating class
class set{

    int m, n;

public:
    void input(void);
    void display(void);
    int largest(void);
};

//defining member functions 
void set :: input(void){
    cout << "Enter the value of m and n : ";
    cin >> m >> n;
}

int set :: largest(void){
    if (m>n)
    return m;
    else
    return n;
}

void set :: display(void){
    cout << "Largest Value = " << largest() << endl;
}

int main()
{
    set lar;
    lar.input();
    lar.display();
    return 0;
}