   #include <iostream>

   #include <string>

   #include<typeinfo>

   using namespace std;

   int main( )

   {

       try

       {

           string strg1("Test");

           string strg2("ing");

           strg1.append(strg2, 4, 2);

           cout << strg1 << endl;

       }

       catch (exception &e)

       {

           cout << "Caught: " << e.what() << endl;

           cout << "Type: " << typeid(e).name() << endl;

       };

       return 0;

   }