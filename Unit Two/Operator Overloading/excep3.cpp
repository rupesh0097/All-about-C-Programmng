//multiple catch statement
// WAP to raise an excep till marks are not valid
#include <iostream>
using namespace std;

int main()
    {
    int p,c,m, error =0;
    
 
    try{
    cout <<"Enter physics mark: ";
    cin>> p;
    if(p<0 || p>100)
    throw p;

    cout <<"Enter Chemistry mark: ";
    cin>> c;
    if(c<0 || c>100)
    throw 1.2;

    cout <<"Enter Math mark: ";
    cin>> m;
    if(m<0 || m>100)
    throw 'a';

   

    }

    catch(char a){
        cout <<"Invalid  Math Marks";
        
    }

    catch(double a){
        cout <<"Invalid  Chemistry Marks";
        
    }

    catch(int a){
        cout <<"Invalid  Physics Marks";
        
    }
  
    
    }