#include <iostream>
using namespace std;

class mart{
  int code;
  int price;
  int quantity;

public:
  void get_data();
  void set_data();
};

void  mart :: get_data(){
  cout << "Enter the code: ";
  cin >>  code;
  cout << "Enter the price: ";
  cin >> price;
  cout << "Enter the quantity: ";
  cin >> quantity;

  int total = price * quantity;
  cout << total << endl;
  
}

// void set_data()
// {
  
// }

int main()
{
  mart m1;
  // m1.set_data();
  m1.get_data();
}



