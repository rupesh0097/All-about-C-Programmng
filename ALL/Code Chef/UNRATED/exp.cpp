#include <iostream>

using namespace std;

class A{

      public: int a=10;

      void disp()

      {

        cout<<"in base class";

      }

};

class B:public A

{

      public: void dis()

      {

            cout<<a;

      }

};

int main()

{

      B b;

      b.disp();

      return 0;

}